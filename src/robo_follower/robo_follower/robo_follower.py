#!/usr/bin/env python3
# coding:utf-8
"""
从控节点 - 接收主控节点的控制指令并控制机械臂
Follower node - Receives control commands from leader node and controls the robot arm
"""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from robo_interfaces.msg import SetAngle
import math
import time
import fashionstar_uart_sdk as uservo
import serial
import struct
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

# 常量定义 / Constants
FOLLOWER_NODE = 'follower_node'  # 节点名称 / Node name
LEADER_ARM_ANGLE_TOPIC = "leader_arm_angle_topic"  # 接收主控节点角度话题 / Receive leader node angle topic
SERVO_PORT_NAME = "/dev/ttyUSB1"  # 舵机串口号 <<< 修改为实际串口号
                                # Servo serial port <<< modify to actual port name
SERVO_BAUDRATE = 1000000  # 舵机的波特率 / Servo communication baud rate
ID = 0  # 多手臂时区分话题ID / ID to distinguish multiple arms in topics


class FollowerArm(Node):

    def __init__(self):
        super().__init__(FOLLOWER_NODE)
        
        # 初始化参数
        self.servo_ids = [0, 1, 2, 3, 4, 5, 6]
        self.SRV_NUM = 7
        self.target_angle = [0 for _ in range(self.SRV_NUM)]
        self.interval = [1500 for _ in range(self.SRV_NUM)]
        self.current_angle = [0.0 for _ in range(self.SRV_NUM)]
        
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
        
        # 订阅主控节点的角度设定话题 / Subscribe to leader node angle topic
        self.angle_subscription = self.create_subscription(
            SetAngle,
            LEADER_ARM_ANGLE_TOPIC,
            self.set_angle_callback,
            10)
        
        self.get_logger().info(f"从控节点初始化完成 / Follower node initialization complete")

    def reset_multi_turn_angle(self, servo_id):
        """重设指定舵机多圈圈数 / Reset multi-turn count for a single servo"""
        self.uservo.disable_torque(servo_id)
        time.sleep(0.05)
        self.uservo.reset_multi_turn_angle(servo_id)

    def set_angle_callback(self, msg):
        """接收主控节点的角度设定并控制舵机 / Receive angle settings from leader node and control servos"""
        angle_info = []
        for i in range(len(msg.servo_id)):
            id = msg.servo_id[i]
            self.target_angle[id] = int(10*msg.target_angle[i])
            if int(msg.time[i]) < 40:
                msg.time[i] = 40
            self.interval[id] = int(msg.time[i])
            angle_info.append(f"舵机{id}:{self.target_angle[id]/10}")

        self.arm_move_by_time()
        self.get_logger().info(f"接收到角度设定: {' | '.join(angle_info)}")

    # 默认：控制by时间 / Default control mode: time-based
    def arm_move_by_time(self):
        acc = [0.0 for _ in range(self.SRV_NUM)]
        for i in range(self.SRV_NUM):
            acc[i] = int(self.interval[i]/2)
        command_data_list = [struct.pack("<BlLHHH", i, self.target_angle[i], self.interval[i], acc[i], acc[i], 0) for i in range(self.SRV_NUM)]
        self.set_angle_by_interval(self.SRV_NUM, command_data_list)

    # 设置角度（指定转速） / Send angle commands with specified speed
    def set_angle_by_interval(self, size, command_data_list):
        self.uservo.send_sync_multiturnanglebyinterval(
            self.uservo.CODE_SET_SERVO_ANGLE_MTURN_BY_INTERVAL,
            size, command_data_list
        )

    def node_close(self):
        """节点关闭时的清理工作 / Cleanup when node is closed"""
        pass


def main(args=None):
    rclpy.init(args=args)
    
    try:
        follower_node = FollowerArm()
    except Exception as e:
        print(f"初始化失败: {e}")
        return
    
    # 使用多线程执行器 / Use multithreaded executor
    executor = MultiThreadedExecutor()
    executor.add_node(follower_node)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        follower_node.node_close()
        follower_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()