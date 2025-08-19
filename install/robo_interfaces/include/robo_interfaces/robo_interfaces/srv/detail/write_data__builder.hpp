// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_interfaces:srv/WriteData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__BUILDER_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo_interfaces/srv/detail/write_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_WriteData_Request_value1
{
public:
  explicit Init_WriteData_Request_value1(::robo_interfaces::srv::WriteData_Request & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::srv::WriteData_Request value1(::robo_interfaces::srv::WriteData_Request::_value1_type arg)
  {
    msg_.value1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::WriteData_Request msg_;
};

class Init_WriteData_Request_servo_id
{
public:
  explicit Init_WriteData_Request_servo_id(::robo_interfaces::srv::WriteData_Request & msg)
  : msg_(msg)
  {}
  Init_WriteData_Request_value1 servo_id(::robo_interfaces::srv::WriteData_Request::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_WriteData_Request_value1(msg_);
  }

private:
  ::robo_interfaces::srv::WriteData_Request msg_;
};

class Init_WriteData_Request_command
{
public:
  Init_WriteData_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WriteData_Request_servo_id command(::robo_interfaces::srv::WriteData_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_WriteData_Request_servo_id(msg_);
  }

private:
  ::robo_interfaces::srv::WriteData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::WriteData_Request>()
{
  return robo_interfaces::srv::builder::Init_WriteData_Request_command();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_WriteData_Response_result
{
public:
  Init_WriteData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_interfaces::srv::WriteData_Response result(::robo_interfaces::srv::WriteData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::WriteData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::WriteData_Response>()
{
  return robo_interfaces::srv::builder::Init_WriteData_Response_result();
}

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__BUILDER_HPP_
