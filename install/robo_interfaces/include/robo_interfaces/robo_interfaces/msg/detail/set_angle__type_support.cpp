// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_interfaces/msg/detail/set_angle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robo_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetAngle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_interfaces::msg::SetAngle(_init);
}

void SetAngle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_interfaces::msg::SetAngle *>(message_memory);
  typed_message->~SetAngle();
}

size_t size_function__SetAngle__servo_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetAngle__servo_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetAngle__servo_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetAngle__servo_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SetAngle__servo_id(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SetAngle__servo_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SetAngle__servo_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SetAngle__servo_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetAngle__target_angle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetAngle__target_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetAngle__target_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetAngle__target_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetAngle__target_angle(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetAngle__target_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetAngle__target_angle(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetAngle__target_angle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetAngle__time(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetAngle__time(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetAngle__time(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetAngle__time(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SetAngle__time(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SetAngle__time(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SetAngle__time(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SetAngle__time(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetAngle__speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetAngle__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetAngle__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetAngle__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SetAngle__speed(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SetAngle__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SetAngle__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SetAngle__speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetAngle_message_member_array[4] = {
  {
    "servo_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces::msg::SetAngle, servo_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetAngle__servo_id,  // size() function pointer
    get_const_function__SetAngle__servo_id,  // get_const(index) function pointer
    get_function__SetAngle__servo_id,  // get(index) function pointer
    fetch_function__SetAngle__servo_id,  // fetch(index, &value) function pointer
    assign_function__SetAngle__servo_id,  // assign(index, value) function pointer
    resize_function__SetAngle__servo_id  // resize(index) function pointer
  },
  {
    "target_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces::msg::SetAngle, target_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetAngle__target_angle,  // size() function pointer
    get_const_function__SetAngle__target_angle,  // get_const(index) function pointer
    get_function__SetAngle__target_angle,  // get(index) function pointer
    fetch_function__SetAngle__target_angle,  // fetch(index, &value) function pointer
    assign_function__SetAngle__target_angle,  // assign(index, value) function pointer
    resize_function__SetAngle__target_angle  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces::msg::SetAngle, time),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetAngle__time,  // size() function pointer
    get_const_function__SetAngle__time,  // get_const(index) function pointer
    get_function__SetAngle__time,  // get(index) function pointer
    fetch_function__SetAngle__time,  // fetch(index, &value) function pointer
    assign_function__SetAngle__time,  // assign(index, value) function pointer
    resize_function__SetAngle__time  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces::msg::SetAngle, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetAngle__speed,  // size() function pointer
    get_const_function__SetAngle__speed,  // get_const(index) function pointer
    get_function__SetAngle__speed,  // get(index) function pointer
    fetch_function__SetAngle__speed,  // fetch(index, &value) function pointer
    assign_function__SetAngle__speed,  // assign(index, value) function pointer
    resize_function__SetAngle__speed  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetAngle_message_members = {
  "robo_interfaces::msg",  // message namespace
  "SetAngle",  // message name
  4,  // number of fields
  sizeof(robo_interfaces::msg::SetAngle),
  SetAngle_message_member_array,  // message members
  SetAngle_init_function,  // function to initialize message memory (memory has to be allocated)
  SetAngle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetAngle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetAngle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robo_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_interfaces::msg::SetAngle>()
{
  return &::robo_interfaces::msg::rosidl_typesupport_introspection_cpp::SetAngle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_interfaces, msg, SetAngle)() {
  return &::robo_interfaces::msg::rosidl_typesupport_introspection_cpp::SetAngle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
