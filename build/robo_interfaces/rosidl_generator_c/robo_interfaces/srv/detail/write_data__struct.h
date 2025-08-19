// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_interfaces:srv/WriteData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__STRUCT_H_
#define ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WriteData in the package robo_interfaces.
typedef struct robo_interfaces__srv__WriteData_Request
{
  rosidl_runtime_c__String command;
  uint8_t servo_id;
  int32_t value1;
} robo_interfaces__srv__WriteData_Request;

// Struct for a sequence of robo_interfaces__srv__WriteData_Request.
typedef struct robo_interfaces__srv__WriteData_Request__Sequence
{
  robo_interfaces__srv__WriteData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__srv__WriteData_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/WriteData in the package robo_interfaces.
typedef struct robo_interfaces__srv__WriteData_Response
{
  bool result;
} robo_interfaces__srv__WriteData_Response;

// Struct for a sequence of robo_interfaces__srv__WriteData_Response.
typedef struct robo_interfaces__srv__WriteData_Response__Sequence
{
  robo_interfaces__srv__WriteData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__srv__WriteData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__STRUCT_H_
