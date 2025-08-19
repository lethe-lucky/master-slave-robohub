#!/usr/bin/env python3
# coding:utf-8
"""
配置加载模块 - 用于读取机械臂配置文件
Configuration loader module - For reading robot arm configuration files
"""
import yaml
import os
from typing import Dict, Any, Optional


class RobotConfig:
    """机械臂配置类"""
    
    def __init__(self, config_file: str):
        """
        初始化配置类
        
        Args:
            config_file: 配置文件路径
        """
        self.config_file = config_file
        self.config = self._load_config()
        
    def _load_config(self) -> Dict[str, Any]:
        """
        加载配置文件
        
        Returns:
            Dict[str, Any]: 配置字典
        """
        if not os.path.exists(self.config_file):
            raise FileNotFoundError(f"配置文件不存在: {self.config_file}")
            
        with open(self.config_file, 'r') as f:
            try:
                config = yaml.safe_load(f)
                return config
            except yaml.YAMLError as e:
                raise ValueError(f"配置文件格式错误: {e}")
    
    def get_arm_group(self, group_name: str) -> Dict[str, Any]:
        """
        获取指定组的机械臂配置
        
        Args:
            group_name: 组名称
            
        Returns:
            Dict[str, Any]: 机械臂组配置
        """
        if 'arm_groups' not in self.config:
            raise KeyError("配置文件中缺少 'arm_groups' 部分")
            
        if group_name not in self.config['arm_groups']:
            raise KeyError(f"配置文件中不存在组 '{group_name}'")
            
        return self.config['arm_groups'][group_name]
    
    def get_leader_config(self, group_name: str) -> Dict[str, Any]:
        """
        获取指定组的主控机械臂配置
        
        Args:
            group_name: 组名称
            
        Returns:
            Dict[str, Any]: 主控机械臂配置
        """
        group_config = self.get_arm_group(group_name)
        if 'leader' not in group_config:
            raise KeyError(f"组 '{group_name}' 中缺少 'leader' 配置")
            
        return group_config['leader']
    
    def get_follower_config(self, group_name: str) -> Dict[str, Any]:
        """
        获取指定组的从控机械臂配置
        
        Args:
            group_name: 组名称
            
        Returns:
            Dict[str, Any]: 从控机械臂配置
        """
        group_config = self.get_arm_group(group_name)
        if 'follower' not in group_config:
            raise KeyError(f"组 '{group_name}' 中缺少 'follower' 配置")
            
        return group_config['follower']
    
    def get_global_config(self) -> Dict[str, Any]:
        """
        获取全局配置
        
        Returns:
            Dict[str, Any]: 全局配置
        """
        if 'global' not in self.config:
            return {}  # 返回空字典，使用默认值
            
        return self.config['global']
    
    def get_update_rate(self) -> float:
        """
        获取更新频率
        
        Returns:
            float: 更新频率(秒)
        """
        global_config = self.get_global_config()
        return global_config.get('update_rate', 0.005)  # 默认 0.005 秒