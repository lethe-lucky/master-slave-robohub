#!/usr/bin/env python3
# coding:utf-8
"""
主控节点 - 发送控制指令给从控节点
Leader node - Sends control commands to follower node
"""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from robo_interfaces.msg import SetAngle
import math
import time
import fashionstar_uart_sdk as uservo
import serial
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

# 常量定义 / Constants
LEADER_NODE = 'leader_node'  # 节点名称 / Node name
LEADER_ARM_ANGLE_TOPIC = "leader_arm_angle_topic"  # 当前关节角度话题 / Current joint states topic
SERVO_PORT_NAME = "/dev/ttyUSB0"  # 舵机串口号 <<< 修改为实际串口号
                                # Servo serial port <<< modify to actual port name
SERVO_BAUDRATE = 1000000  # 舵机的波特率 / Servo communication baud rate


class LeaderArm(Node):

    def __init__(self):
        super().__init__('leader_node')
        # 发布舵机角度设定话题 / Publisher for SetAngle messages
        self.angle_publishers = self.create_publisher(
            SetAngle,                                               
            LEADER_ARM_ANGLE_TOPIC,
            1)
        self.servo_ids = [0,1,2,3,4,5,6]
        # 初始化串口 / Initialize serial port
        try:
            self.uart = serial.Serial(port=SERVO_PORT_NAME,baudrate=SERVO_BAUDRATE,parity=serial.PARITY_NONE,stopbits=1,bytesize=8,timeout=0)
        except serial.SerialException as e:
            self.get_logger().error(f"串口初始化失败: {e}")
            raise ValueError(f"串口初始化失败: {e}")  # Serial port init failed
        try:
            self.uservo = uservo.UartServoManager(self.uart)
        except Exception as e:
            raise

        # 重置多圈角度
        self.reset_multi_turn_angle(0xff)
        time.sleep(0.1)
        for i in range(6):
            self.uservo.set_damping(i,power=300)
        
        # 创建定时器
        timer_period = 0.005  # seconds
        self.timer = self.create_timer(timer_period, self.fsrobo_a1_leader_angle_publish)

        self.get_logger().info(f"主控节点初始化完成 / Leader node initialization complete")

    def reset_multi_turn_angle(self, servo_id):
        """重设指定舵机多圈圈数 / Reset multi-turn count for a single servo"""
        self.uservo.disable_torque(servo_id)
        time.sleep(0.05)
        self.uservo.reset_multi_turn_angle(servo_id)
        time.sleep(0.05)

    def destroy_node(self):
        """安全释放资源"""
        self.get_logger().info('正在关闭节点并释放资源...')
        if hasattr(self, 'timer'):
            self.timer.cancel()
        if hasattr(self, 'uart') and self.uart.is_open:
            self.uart.close()
        super().destroy_node()

    def fsrobo_a1_leader_angle_publish(self):
        # 构造 SetAngle 消息 / build SetAngle msg
        leader_msg = SetAngle()
        self.uservo.send_sync_servo_monitor(self.servo_ids)
        
        # 初始化数组
        leader_msg.servo_id = []
        leader_msg.target_angle = []
        leader_msg.time = []
        
        # 收集所有舵机角度
        angle_list = []
        for i in range(len(self.servo_ids)):
            leader_msg.servo_id.append(self.servo_ids[i])
            current_angle = self.uservo.servos[i].angle_monitor
            leader_msg.target_angle.append(current_angle)
            leader_msg.time.append(100)
            angle_list.append(f"舵机{self.servo_ids[i]}:{current_angle}")
        
        # 一行打印所有角度
        self.get_logger().info(f"当前角度: {' | '.join(angle_list)}")
        
        self.angle_publishers.publish(leader_msg)

def main(args=None):
    rclpy.init(args=args)
    leader_node = LeaderArm()
    
    # 使用多线程执行器 / Use multithreaded executor
    executor = MultiThreadedExecutor()
    executor.add_node(leader_node)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        leader_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()