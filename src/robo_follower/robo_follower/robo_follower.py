#!/usr/bin/env python3
# coding:utf-8
"""
从控节点 - 接收主控节点的控制指令并控制机械臂
Follower node - Receives control commands from leader node and controls the robot arm
"""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from robo_hubinterfaces.msg import SetAngleServo
import math
import time
import fashionstar_uart_sdk as uservo
import serial
import struct
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

class FollowerArm(Node):

    def __init__(self, config_file=DEFAULT_CONFIG_FILE, group_name=DEFAULT_GROUP):
        # 加载配置
        self.config = RobotConfig(config_file)
        self.follower_config = self.config.get_follower_config(group_name)
        
        # 从配置中获取参数
        node_name = self.follower_config.get('node_name', 'follower_node')
        self.topic_name = self.follower_config.get('topic_name', 'leader_arm_angle_topic')
        self.servo_port = self.follower_config.get('port', '/dev/ttyUSB1')
        self.servo_baudrate = self.follower_config.get('baudrate', 1000000)
        self.servo_ids = self.follower_config.get('servo_ids', [0, 1, 2, 3, 4, 5, 6])
        
        # 初始化节点
        super().__init__(node_name)
        
        # 初始化参数
        self.SRV_NUM = len(self.servo_ids)
        self.target_angle = [0 for _ in range(self.SRV_NUM)]
        self.interval = [1500 for _ in range(self.SRV_NUM)]
        self.current_angle = [0.0 for _ in range(self.SRV_NUM)]
        
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
        
        # 订阅主控节点的角度设定话题 / Subscribe to leader node angle topic
        self.angle_subscription = self.create_subscription(
            SetAngleServo,
            self.topic_name,
            self.set_angle_callback,
            10)
        
        self.get_logger().info(f"从控节点初始化完成 / Follower node initialization complete")
        self.get_logger().info(f"使用串口: {self.servo_port}, 波特率: {self.servo_baudrate}")
        self.get_logger().info(f"订阅话题: {self.topic_name}")
        self.get_logger().info(f"舵机ID: {self.servo_ids}")

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

    def destroy_node(self):
        """安全释放资源"""
        self.get_logger().info('正在关闭节点并释放资源...')
        if hasattr(self, 'uart') and self.uart.is_open:
            self.uart.close()
        super().destroy_node()


def main(args=None):
    # 解析命令行参数
    parser = argparse.ArgumentParser(description='Follower Arm Node')
    parser.add_argument('--config', type=str, default=DEFAULT_CONFIG_FILE,
                        help='Configuration file path')
    parser.add_argument('--group', type=str, default=DEFAULT_GROUP,
                        help='Arm group name in configuration')
    
    # 解析ROS2参数
    rclpy.init(args=args)
    ros_args = rclpy.utilities.remove_ros_args(args=args)
    parsed_args = parser.parse_args(ros_args[1:])
    
    try:
        follower_node = FollowerArm(config_file=parsed_args.config, group_name=parsed_args.group)
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
        follower_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()