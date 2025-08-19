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
import os
import sys
import argparse
from robo_config.config_loader import RobotConfig

# 默认配置 / Default configuration
from ament_index_python.packages import get_package_share_directory
DEFAULT_CONFIG_FILE = os.path.join(get_package_share_directory('robo_config'), 'config', 'robot_config.yaml')
# from ament_index_python.packages import get_package_share_directory
DEFAULT_CONFIG_FILE = os.path.join(get_package_share_directory('robo_config'), 'config', 'robot_config.yaml')
DEFAULT_GROUP = 'group1'

class LeaderArm(Node):

    def __init__(self, config_file=DEFAULT_CONFIG_FILE, group_name=DEFAULT_GROUP):
        # 加载配置
        self.config = RobotConfig(config_file)
        self.leader_config = self.config.get_leader_config(group_name)
        
        # 从配置中获取参数
        node_name = self.leader_config.get('node_name', 'leader_node')
        self.topic_name = self.leader_config.get('topic_name', 'leader_arm_angle_topic')
        self.servo_port = self.leader_config.get('port', '/dev/ttyUSB0')
        self.servo_baudrate = self.leader_config.get('baudrate', 1000000)
        self.servo_ids = self.leader_config.get('servo_ids', [0, 1, 2, 3, 4, 5, 6])
        
        # 初始化节点
        super().__init__(node_name)
        
        # 发布舵机角度设定话题 / Publisher for SetAngle messages
        self.angle_publishers = self.create_publisher(
            SetAngle,                                               
            self.topic_name,
            1)
        
        # 初始化串口 / Initialize serial port
        try:
            self.uart = serial.Serial(port=self.servo_port, baudrate=self.servo_baudrate, 
                                     parity=serial.PARITY_NONE, stopbits=1, bytesize=8, timeout=0)
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
            self.uservo.set_damping(i, power=300)
        
        # 创建定时器
        timer_period = self.config.get_update_rate()  # 从配置获取更新频率
        self.timer = self.create_timer(timer_period, self.fsrobo_a1_leader_angle_publish)

        self.get_logger().info(f"主控节点初始化完成 / Leader node initialization complete")
        self.get_logger().info(f"使用串口: {self.servo_port}, 波特率: {self.servo_baudrate}")
        self.get_logger().info(f"发布话题: {self.topic_name}")
        self.get_logger().info(f"舵机ID: {self.servo_ids}")

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
            if current_angle is None:
                self.get_logger().error(f"舵机 {self.servo_ids[i]} 角度读取失败！")
                current_angle = 0.0  # 默认值
            leader_msg.target_angle.append(current_angle)
            leader_msg.time.append(100)
            angle_list.append(f"舵机{self.servo_ids[i]}:{current_angle}")
        
        # 一行打印所有角度
        self.get_logger().info(f"当前角度: {' | '.join(angle_list)}")
        
        self.angle_publishers.publish(leader_msg)

def main(args=None):
    # 解析命令行参数
    parser = argparse.ArgumentParser(description='Leader Arm Node')
    parser.add_argument('--config', type=str, default=DEFAULT_CONFIG_FILE,
                        help='Configuration file path')
    parser.add_argument('--group', type=str, default=DEFAULT_GROUP,
                        help='Arm group name in configuration')
    
    # 解析ROS2参数
    rclpy.init(args=args)
    ros_args = rclpy.utilities.remove_ros_args(args=args)
    parsed_args = parser.parse_args(ros_args[1:])
    
    try:
        leader_node = LeaderArm(config_file=parsed_args.config, group_name=parsed_args.group)
    except Exception as e:
        print(f"初始化失败: {e}")
        return
    
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