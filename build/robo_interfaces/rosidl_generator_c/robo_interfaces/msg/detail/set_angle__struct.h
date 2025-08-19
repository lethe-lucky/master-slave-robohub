// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__STRUCT_H_
#define ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'servo_id'
// Member 'target_angle'
// Member 'time'
// Member 'speed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SetAngle in the package robo_interfaces.
typedef struct robo_interfaces__msg__SetAngle
{
  rosidl_runtime_c__uint8__Sequence servo_id;
  rosidl_runtime_c__double__Sequence target_angle;
  rosidl_runtime_c__int32__Sequence time;
  rosidl_runtime_c__int32__Sequence speed;
} robo_interfaces__msg__SetAngle;

// Struct for a sequence of robo_interfaces__msg__SetAngle.
typedef struct robo_interfaces__msg__SetAngle__Sequence
{
  robo_interfaces__msg__SetAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__msg__SetAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__STRUCT_H_
