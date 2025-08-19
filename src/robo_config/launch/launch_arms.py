#!/usr/bin/env python3
# coding:utf-8
"""
启动脚本 - 用于启动多组机械臂
Launch script - For starting multiple robot arm groups
"""
import os
import sys
import argparse
import subprocess
import time
import yaml
import signal
import threading

# 获取当前脚本所在目录的父目录
CURRENT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CONFIG_FILE = os.path.join(CURRENT_DIR, 'config', 'robot_config.yaml')

def load_config(config_file):
    """加载配置文件"""
    if not os.path.exists(config_file):
        print(f"错误: 配置文件不存在: {config_file}")
        sys.exit(1)
        
    with open(config_file, 'r') as f:
        try:
            config = yaml.safe_load(f)
            return config
        except yaml.YAMLError as e:
            print(f"错误: 配置文件格式错误: {e}")
            sys.exit(1)

def get_group_names(config):
    """获取所有组名称"""
    if 'arm_groups' not in config:
        print("错误: 配置文件中缺少 'arm_groups' 部分")
        sys.exit(1)
        
    return list(config['arm_groups'].keys())

def start_leader(group_name, config_file):
    """启动主控节点"""
    cmd = [
        'ros2', 'run', 'robo_leader', 'leader',
        '--ros-args',
        '--log-level', 'info',
        '--',
        '--config', config_file,
        '--group', group_name
    ]
    
    print(f"启动主控节点 (组: {group_name}): {' '.join(cmd)}")
    return subprocess.Popen(cmd)

def start_follower(group_name, config_file):
    """启动从控节点"""
    cmd = [
        'ros2', 'run', 'robo_follower', 'follower',
        '--ros-args',
        '--log-level', 'info',
        '--',
        '--config', config_file,
        '--group', group_name
    ]
    
    print(f"启动从控节点 (组: {group_name}): {' '.join(cmd)}")
    return subprocess.Popen(cmd)

def start_group(group_name, config_file):
    """启动一组机械臂"""
    leader_process = start_leader(group_name, config_file)
    # 等待一段时间，确保主控节点已启动
    time.sleep(1)
    follower_process = start_follower(group_name, config_file)
    
    return leader_process, follower_process

def signal_handler(sig, frame):
    """处理信号"""
    print("\n正在关闭所有节点...")
    for process in processes:
        if process.poll() is None:  # 如果进程还在运行
            process.terminate()
    
    # 等待所有进程结束
    for process in processes:
        try:
            process.wait(timeout=5)
        except subprocess.TimeoutExpired:
            process.kill()
    
    print("所有节点已关闭")
    sys.exit(0)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='启动多组机械臂')
    parser.add_argument('--config', type=str, default=CONFIG_FILE,
                        help='配置文件路径')
    parser.add_argument('--groups', type=str, default='all',
                        help='要启动的组名称，用逗号分隔，或者使用 "all" 启动所有组')
    
    args = parser.parse_args()
    
    # 加载配置
    config = load_config(args.config)
    all_groups = get_group_names(config)
    
    # 确定要启动的组
    if args.groups.lower() == 'all':
        groups_to_start = all_groups
    else:
        groups_to_start = [g.strip() for g in args.groups.split(',')]
        # 验证组名是否有效
        for group in groups_to_start:
            if group not in all_groups:
                print(f"错误: 未知的组名称: {group}")
                print(f"有效的组名称: {', '.join(all_groups)}")
                sys.exit(1)
    
    # 注册信号处理器
    signal.signal(signal.SIGINT, signal_handler)
    signal.signal(signal.SIGTERM, signal_handler)
    
    # 启动所有组
    processes = []
    for group in groups_to_start:
        print(f"\n启动组: {group}")
        leader, follower = start_group(group, args.config)
        processes.extend([leader, follower])
    
    print("\n所有组已启动")
    print("按 Ctrl+C 停止所有节点")
    
    # 等待所有进程结束
    try:
        while True:
            # 检查是否有进程结束
            for i, process in enumerate(processes):
                if process.poll() is not None:
                    print(f"警告: 进程 {i} 已结束，退出代码: {process.returncode}")
            
            time.sleep(1)
    except KeyboardInterrupt:
        signal_handler(signal.SIGINT, None)