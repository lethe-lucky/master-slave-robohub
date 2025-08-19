// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_interfaces:srv/ReadData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_interfaces/srv/detail/read_data__rosidl_typesupport_introspection_c.h"
#include "robo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_interfaces/srv/detail/read_data__functions.h"
#include "robo_interfaces/srv/detail/read_data__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_interfaces__srv__ReadData_Request__init(message_memory);
}

void robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_fini_function(void * message_memory)
{
  robo_interfaces__srv__ReadData_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__srv__ReadData_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_members = {
  "robo_interfaces__srv",  // message namespace
  "ReadData_Request",  // message name
  1,  // number of fields
  sizeof(robo_interfaces__srv__ReadData_Request),
  robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_member_array,  // message members
  robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_type_support_handle = {
  0,
  &robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData_Request)() {
  if (!robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_type_support_handle.typesupport_identifier) {
    robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robo_interfaces__srv__ReadData_Request__rosidl_typesupport_introspection_c__ReadData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_interfaces/srv/detail/read_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_interfaces/srv/detail/read_data__functions.h"
// already included above
// #include "robo_interfaces/srv/detail/read_data__struct.h"


// Include directives for member types
// Member `servo_id`
// Member `servo_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_interfaces__srv__ReadData_Response__init(message_memory);
}

void robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_fini_function(void * message_memory)
{
  robo_interfaces__srv__ReadData_Response__fini(message_memory);
}

size_t robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__size_function__ReadData_Response__servo_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_const_function__ReadData_Response__servo_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_function__ReadData_Response__servo_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__fetch_function__ReadData_Response__servo_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_const_function__ReadData_Response__servo_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__assign_function__ReadData_Response__servo_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_function__ReadData_Response__servo_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__resize_function__ReadData_Response__servo_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__size_function__ReadData_Response__servo_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_const_function__ReadData_Response__servo_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_function__ReadData_Response__servo_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__fetch_function__ReadData_Response__servo_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_const_function__ReadData_Response__servo_data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__assign_function__ReadData_Response__servo_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_function__ReadData_Response__servo_data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__resize_function__ReadData_Response__servo_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_member_array[2] = {
  {
    "servo_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__srv__ReadData_Response, servo_id),  // bytes offset in struct
    NULL,  // default value
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__size_function__ReadData_Response__servo_id,  // size() function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_const_function__ReadData_Response__servo_id,  // get_const(index) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_function__ReadData_Response__servo_id,  // get(index) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__fetch_function__ReadData_Response__servo_id,  // fetch(index, &value) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__assign_function__ReadData_Response__servo_id,  // assign(index, value) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__resize_function__ReadData_Response__servo_id  // resize(index) function pointer
  },
  {
    "servo_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces__srv__ReadData_Response, servo_data),  // bytes offset in struct
    NULL,  // default value
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__size_function__ReadData_Response__servo_data,  // size() function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_const_function__ReadData_Response__servo_data,  // get_const(index) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__get_function__ReadData_Response__servo_data,  // get(index) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__fetch_function__ReadData_Response__servo_data,  // fetch(index, &value) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__assign_function__ReadData_Response__servo_data,  // assign(index, value) function pointer
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__resize_function__ReadData_Response__servo_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_members = {
  "robo_interfaces__srv",  // message namespace
  "ReadData_Response",  // message name
  2,  // number of fields
  sizeof(robo_interfaces__srv__ReadData_Response),
  robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_member_array,  // message members
  robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_type_support_handle = {
  0,
  &robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData_Response)() {
  if (!robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_type_support_handle.typesupport_identifier) {
    robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robo_interfaces__srv__ReadData_Response__rosidl_typesupport_introspection_c__ReadData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_interfaces/srv/detail/read_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_members = {
  "robo_interfaces__srv",  // service namespace
  "ReadData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_Request_message_type_support_handle,
  NULL  // response message
  // robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_type_support_handle = {
  0,
  &robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData)() {
  if (!robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_type_support_handle.typesupport_identifier) {
    robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_interfaces, srv, ReadData_Response)()->data;
  }

  return &robo_interfaces__srv__detail__read_data__rosidl_typesupport_introspection_c__ReadData_service_type_support_handle;
}
