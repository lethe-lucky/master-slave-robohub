// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_interfaces:srv/ReadData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__READ_DATA__BUILDER_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__READ_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo_interfaces/srv/detail/read_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReadData_Request_command
{
public:
  Init_ReadData_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_interfaces::srv::ReadData_Request command(::robo_interfaces::srv::ReadData_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::ReadData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::ReadData_Request>()
{
  return robo_interfaces::srv::builder::Init_ReadData_Request_command();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReadData_Response_servo_data
{
public:
  explicit Init_ReadData_Response_servo_data(::robo_interfaces::srv::ReadData_Response & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::srv::ReadData_Response servo_data(::robo_interfaces::srv::ReadData_Response::_servo_data_type arg)
  {
    msg_.servo_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::ReadData_Response msg_;
};

class Init_ReadData_Response_servo_id
{
public:
  Init_ReadData_Response_servo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadData_Response_servo_data servo_id(::robo_interfaces::srv::ReadData_Response::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_ReadData_Response_servo_data(msg_);
  }

private:
  ::robo_interfaces::srv::ReadData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::ReadData_Response>()
{
  return robo_interfaces::srv::builder::Init_ReadData_Response_servo_id();
}

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__SRV__DETAIL__READ_DATA__BUILDER_HPP_
