// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_interfaces/msg/detail/set_angle__rosidl_typesupport_introspection_c.h"
#include "robo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_interfaces/msg/detail/set_angle__functions.h"
#include "robo_interfaces/msg/detail/set_angle__struct.h"


// Include directives for member types
// Member `servo_id`
// Member `target_angle`
// Member `time`
// Member `speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_interfaces__msg__SetAngle__init(message_memory);
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_fini_function(void * message_memory)
{
  robo_interfaces__msg__SetAngle__fini(message_memory);
}

size_t robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__servo_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__servo_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__servo_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__servo_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__servo_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__servo_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__servo_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__servo_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__target_angle(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__target_angle(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__target_angle(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__target_angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__target_angle(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__target_angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__target_angle(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__target_angle(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__time(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__time(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__time(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__time(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__time(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__time(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__time(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__time(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__speed(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__speed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__speed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__speed(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__speed(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__speed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_member_array[4] = {
  {
    "servo_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__msg__SetAngle, servo_id),  // bytes offset in struct
    NULL,  // default value
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__servo_id,  // size() function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__servo_id,  // get_const(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__servo_id,  // get(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__servo_id,  // fetch(index, &value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__servo_id,  // assign(index, value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__servo_id  // resize(index) function pointer
  },
  {
    "target_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__msg__SetAngle, target_angle),  // bytes offset in struct
    NULL,  // default value
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__target_angle,  // size() function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__target_angle,  // get_const(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__target_angle,  // get(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__target_angle,  // fetch(index, &value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__target_angle,  // assign(index, value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__target_angle  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__msg__SetAngle, time),  // bytes offset in struct
    NULL,  // default value
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__time,  // size() function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__time,  // get_const(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__time,  // get(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__time,  // fetch(index, &value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__time,  // assign(index, value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__time  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__msg__SetAngle, speed),  // bytes offset in struct
    NULL,  // default value
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__size_function__SetAngle__speed,  // size() function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_const_function__SetAngle__speed,  // get_const(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__get_function__SetAngle__speed,  // get(index) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__fetch_function__SetAngle__speed,  // fetch(index, &value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__assign_function__SetAngle__speed,  // assign(index, value) function pointer
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__resize_function__SetAngle__speed  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_members = {
  "robo_interfaces__msg",  // message namespace
  "SetAngle",  // message name
  4,  // number of fields
  sizeof(robo_interfaces__msg__SetAngle),
  robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_member_array,  // message members
  robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_init_function,  // function to initialize message memory (memory has to be allocated)
  robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_type_support_handle = {
  0,
  &robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, msg, SetAngle)() {
  if (!robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_type_support_handle.typesupport_identifier) {
    robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robo_interfaces__msg__SetAngle__rosidl_typesupport_introspection_c__SetAngle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
