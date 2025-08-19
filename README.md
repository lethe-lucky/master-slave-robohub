# 多机械臂主从控制系统

本系统实现了多组机械臂的主从控制功能，通过配置文件可以灵活设置不同机械臂的接口参数。

## 系统架构

系统由以下几个部分组成：

1. **配置系统**：通过YAML配置文件定义机械臂组及其参数
2. **主控节点(Leader)**：读取主控机械臂的状态并发布
3. **从控节点(Follower)**：订阅主控节点的状态并控制从控机械臂

## 项目结构

```
master-slave-robohub/
├── src/
│   ├── robo_config/           # 配置管理包
│   │   ├── config/            # 配置文件目录
│   │   │   └── robot_config.yaml  # 机械臂配置文件
│   │   ├── launch/            # 启动脚本目录
│   │   │   └── launch_arms.py # 多组机械臂启动脚本
│   │   └── config_loader.py   # 配置加载模块
│   ├── robo_leader/           # 主控节点包
│   ├── robo_follower/         # 从控节点包
│   └── robo_interfaces/       # 接口定义包
└── README.md                  # 项目说明文档
```

## 配置文件

配置文件位于 `src/robo_config/config/robot_config.yaml`，可以定义多组机械臂，每组包含一个主控和一个从控。

配置文件示例：

```yaml
# 机械臂配置文件
arm_groups:
  # 第一组机械臂
  group1:
    leader:
      node_name: "leader_node_1"
      topic_name: "leader_arm_angle_topic_1"
      port: "/dev/ttyUSB0"
      baudrate: 1000000
      servo_ids: [0, 1, 2, 3, 4, 5, 6]
    follower:
      node_name: "follower_node_1"
      topic_name: "leader_arm_angle_topic_1"
      port: "/dev/ttyUSB1"
      baudrate: 1000000
      servo_ids: [0, 1, 2, 3, 4, 5, 6]
  
  # 第二组机械臂
  group2:
    leader:
      node_name: "leader_node_2"
      topic_name: "leader_arm_angle_topic_2"
      port: "/dev/ttyUSB2"
      baudrate: 1000000
      servo_ids: [0, 1, 2, 3, 4, 5, 6]
    follower:
      node_name: "follower_node_2"
      topic_name: "leader_arm_angle_topic_2"
      port: "/dev/ttyUSB3"
      baudrate: 1000000
      servo_ids: [0, 1, 2, 3, 4, 5, 6]

# 全局配置
global:
  update_rate: 0.005  # 更新频率(秒)
```

## 安装与构建

在使用系统前，需要先构建ROS2包：

```bash
# 进入工作空间根目录
cd /home/fsrobo/master-slave-robohub

# 构建所有包
colcon build

# 设置环境变量
source install/setup.bash
```

确保每次打开新终端时都执行`source install/setup.bash`命令，或将其添加到`~/.bashrc`文件中。

## 使用方法

### 1. 启动单组机械臂

启动主控节点：

```bash
ros2 run robo_leader leader --ros-args -- --config /home/fsrobo/master-slave-robohub/src/robo_config/config/robot_config.yaml --group group1
```

启动从控节点：

```bash
ros2 run robo_follower follower --ros-args -- --config /home/fsrobo/master-slave-robohub/src/robo_config/config/robot_config.yaml --group group1
```

### 2. 使用启动脚本启动多组机械臂

确保已经构建项目并设置环境变量：

```bash
cd /home/fsrobo/master-slave-robohub
colcon build
source install/setup.bash
```

启动所有组：

```bash
python3 src/robo_config/launch/launch_arms.py
```

启动指定组：

```bash
python3 src/robo_config/launch/launch_arms.py --groups group1,group2
```

指定配置文件：

```bash
python3 src/robo_config/launch/launch_arms.py --config /path/to/custom_config.yaml
```

## 添加新的机械臂组

1. 编辑 `src/robo_config/config/robot_config.yaml` 文件，添加新的组配置
2. 确保每个组的 `topic_name` 是唯一的
3. 设置正确的串口参数 (`port`, `baudrate`)
4. 使用启动脚本启动新组

## 故障排除

### "No executable found" 错误

如果遇到 "No executable found" 错误，可能是以下原因：

1. 未构建ROS2包：
   ```bash
   cd /home/fsrobo/master-slave-robohub
   colcon build
   ```

2. 未设置环境变量：
   ```bash
   source /home/fsrobo/master-slave-robohub/install/setup.bash
   ```

3. 可执行文件权限问题：
   ```bash
   chmod +x /home/fsrobo/master-slave-robohub/install/robo_leader/lib/robo_leader/robo_leader
   chmod +x /home/fsrobo/master-slave-robohub/install/robo_follower/lib/robo_follower/robo_follower
   ```

### 串口访问问题

如果遇到串口访问权限问题，请确保当前用户有权限访问串口设备：

```bash
sudo usermod -a -G dialout $USER
```

然后重新登录。

### 串口设备识别

如果系统无法识别串口设备，可以使用以下命令列出所有串口设备：

```bash
ls -l /dev/ttyUSB*
```

确保配置文件中的串口设备名称正确。

## 依赖项

- ROS2 Humble 或更高版本
- Python 3.8+
- PyYAML
- fashionstar_uart_sdk
- colcon (ROS2构建工具)
- rclpy (ROS2 Python客户端库)
- std_msgs (ROS2标准消息库)

## 许可证

MIT