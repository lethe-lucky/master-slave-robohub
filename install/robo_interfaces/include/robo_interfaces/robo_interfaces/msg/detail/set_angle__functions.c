// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice
#include "robo_interfaces/msg/detail/set_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `servo_id`
// Member `target_angle`
// Member `time`
// Member `speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robo_interfaces__msg__SetAngle__init(robo_interfaces__msg__SetAngle * msg)
{
  if (!msg) {
    return false;
  }
  // servo_id
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->servo_id, 0)) {
    robo_interfaces__msg__SetAngle__fini(msg);
    return false;
  }
  // target_angle
  if (!rosidl_runtime_c__double__Sequence__init(&msg->target_angle, 0)) {
    robo_interfaces__msg__SetAngle__fini(msg);
    return false;
  }
  // time
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->time, 0)) {
    robo_interfaces__msg__SetAngle__fini(msg);
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->speed, 0)) {
    robo_interfaces__msg__SetAngle__fini(msg);
    return false;
  }
  return true;
}

void
robo_interfaces__msg__SetAngle__fini(robo_interfaces__msg__SetAngle * msg)
{
  if (!msg) {
    return;
  }
  // servo_id
  rosidl_runtime_c__uint8__Sequence__fini(&msg->servo_id);
  // target_angle
  rosidl_runtime_c__double__Sequence__fini(&msg->target_angle);
  // time
  rosidl_runtime_c__int32__Sequence__fini(&msg->time);
  // speed
  rosidl_runtime_c__int32__Sequence__fini(&msg->speed);
}

bool
robo_interfaces__msg__SetAngle__are_equal(const robo_interfaces__msg__SetAngle * lhs, const robo_interfaces__msg__SetAngle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_id
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->servo_id), &(rhs->servo_id)))
  {
    return false;
  }
  // target_angle
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->target_angle), &(rhs->target_angle)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  return true;
}

bool
robo_interfaces__msg__SetAngle__copy(
  const robo_interfaces__msg__SetAngle * input,
  robo_interfaces__msg__SetAngle * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_id
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->servo_id), &(output->servo_id)))
  {
    return false;
  }
  // target_angle
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->target_angle), &(output->target_angle)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  return true;
}

robo_interfaces__msg__SetAngle *
robo_interfaces__msg__SetAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__msg__SetAngle * msg = (robo_interfaces__msg__SetAngle *)allocator.allocate(sizeof(robo_interfaces__msg__SetAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__msg__SetAngle));
  bool success = robo_interfaces__msg__SetAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__msg__SetAngle__destroy(robo_interfaces__msg__SetAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__msg__SetAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__msg__SetAngle__Sequence__init(robo_interfaces__msg__SetAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__msg__SetAngle * data = NULL;

  if (size) {
    data = (robo_interfaces__msg__SetAngle *)allocator.zero_allocate(size, sizeof(robo_interfaces__msg__SetAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__msg__SetAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__msg__SetAngle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robo_interfaces__msg__SetAngle__Sequence__fini(robo_interfaces__msg__SetAngle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_interfaces__msg__SetAngle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robo_interfaces__msg__SetAngle__Sequence *
robo_interfaces__msg__SetAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__msg__SetAngle__Sequence * array = (robo_interfaces__msg__SetAngle__Sequence *)allocator.allocate(sizeof(robo_interfaces__msg__SetAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__msg__SetAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__msg__SetAngle__Sequence__destroy(robo_interfaces__msg__SetAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__msg__SetAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__msg__SetAngle__Sequence__are_equal(const robo_interfaces__msg__SetAngle__Sequence * lhs, const robo_interfaces__msg__SetAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__msg__SetAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__msg__SetAngle__Sequence__copy(
  const robo_interfaces__msg__SetAngle__Sequence * input,
  robo_interfaces__msg__SetAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__msg__SetAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__msg__SetAngle * data =
      (robo_interfaces__msg__SetAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__msg__SetAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__msg__SetAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__msg__SetAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
