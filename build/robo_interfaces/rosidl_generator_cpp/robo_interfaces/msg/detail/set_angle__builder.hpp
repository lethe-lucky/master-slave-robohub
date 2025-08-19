// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__BUILDER_HPP_
#define ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo_interfaces/msg/detail/set_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo_interfaces
{

namespace msg
{

namespace builder
{

class Init_SetAngle_speed
{
public:
  explicit Init_SetAngle_speed(::robo_interfaces::msg::SetAngle & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::msg::SetAngle speed(::robo_interfaces::msg::SetAngle::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::msg::SetAngle msg_;
};

class Init_SetAngle_time
{
public:
  explicit Init_SetAngle_time(::robo_interfaces::msg::SetAngle & msg)
  : msg_(msg)
  {}
  Init_SetAngle_speed time(::robo_interfaces::msg::SetAngle::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_SetAngle_speed(msg_);
  }

private:
  ::robo_interfaces::msg::SetAngle msg_;
};

class Init_SetAngle_target_angle
{
public:
  explicit Init_SetAngle_target_angle(::robo_interfaces::msg::SetAngle & msg)
  : msg_(msg)
  {}
  Init_SetAngle_time target_angle(::robo_interfaces::msg::SetAngle::_target_angle_type arg)
  {
    msg_.target_angle = std::move(arg);
    return Init_SetAngle_time(msg_);
  }

private:
  ::robo_interfaces::msg::SetAngle msg_;
};

class Init_SetAngle_servo_id
{
public:
  Init_SetAngle_servo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAngle_target_angle servo_id(::robo_interfaces::msg::SetAngle::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_SetAngle_target_angle(msg_);
  }

private:
  ::robo_interfaces::msg::SetAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::msg::SetAngle>()
{
  return robo_interfaces::msg::builder::Init_SetAngle_servo_id();
}

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__BUILDER_HPP_
