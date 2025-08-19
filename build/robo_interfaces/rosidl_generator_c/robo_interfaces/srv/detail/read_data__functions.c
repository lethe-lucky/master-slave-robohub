// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_interfaces:srv/ReadData.idl
// generated code does not contain a copyright notice
#include "robo_interfaces/srv/detail/read_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
robo_interfaces__srv__ReadData_Request__init(robo_interfaces__srv__ReadData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    robo_interfaces__srv__ReadData_Request__fini(msg);
    return false;
  }
  return true;
}

void
robo_interfaces__srv__ReadData_Request__fini(robo_interfaces__srv__ReadData_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
robo_interfaces__srv__ReadData_Request__are_equal(const robo_interfaces__srv__ReadData_Request * lhs, const robo_interfaces__srv__ReadData_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
robo_interfaces__srv__ReadData_Request__copy(
  const robo_interfaces__srv__ReadData_Request * input,
  robo_interfaces__srv__ReadData_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

robo_interfaces__srv__ReadData_Request *
robo_interfaces__srv__ReadData_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ReadData_Request * msg = (robo_interfaces__srv__ReadData_Request *)allocator.allocate(sizeof(robo_interfaces__srv__ReadData_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__srv__ReadData_Request));
  bool success = robo_interfaces__srv__ReadData_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__srv__ReadData_Request__destroy(robo_interfaces__srv__ReadData_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__srv__ReadData_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__srv__ReadData_Request__Sequence__init(robo_interfaces__srv__ReadData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ReadData_Request * data = NULL;

  if (size) {
    data = (robo_interfaces__srv__ReadData_Request *)allocator.zero_allocate(size, sizeof(robo_interfaces__srv__ReadData_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__srv__ReadData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__srv__ReadData_Request__fini(&data[i - 1]);
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
robo_interfaces__srv__ReadData_Request__Sequence__fini(robo_interfaces__srv__ReadData_Request__Sequence * array)
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
      robo_interfaces__srv__ReadData_Request__fini(&array->data[i]);
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

robo_interfaces__srv__ReadData_Request__Sequence *
robo_interfaces__srv__ReadData_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ReadData_Request__Sequence * array = (robo_interfaces__srv__ReadData_Request__Sequence *)allocator.allocate(sizeof(robo_interfaces__srv__ReadData_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__srv__ReadData_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__srv__ReadData_Request__Sequence__destroy(robo_interfaces__srv__ReadData_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__srv__ReadData_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__srv__ReadData_Request__Sequence__are_equal(const robo_interfaces__srv__ReadData_Request__Sequence * lhs, const robo_interfaces__srv__ReadData_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__srv__ReadData_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__srv__ReadData_Request__Sequence__copy(
  const robo_interfaces__srv__ReadData_Request__Sequence * input,
  robo_interfaces__srv__ReadData_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__srv__ReadData_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__srv__ReadData_Request * data =
      (robo_interfaces__srv__ReadData_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__srv__ReadData_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__srv__ReadData_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__srv__ReadData_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `servo_id`
// Member `servo_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robo_interfaces__srv__ReadData_Response__init(robo_interfaces__srv__ReadData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // servo_id
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->servo_id, 0)) {
    robo_interfaces__srv__ReadData_Response__fini(msg);
    return false;
  }
  // servo_data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->servo_data, 0)) {
    robo_interfaces__srv__ReadData_Response__fini(msg);
    return false;
  }
  return true;
}

void
robo_interfaces__srv__ReadData_Response__fini(robo_interfaces__srv__ReadData_Response * msg)
{
  if (!msg) {
    return;
  }
  // servo_id
  rosidl_runtime_c__uint8__Sequence__fini(&msg->servo_id);
  // servo_data
  rosidl_runtime_c__double__Sequence__fini(&msg->servo_data);
}

bool
robo_interfaces__srv__ReadData_Response__are_equal(const robo_interfaces__srv__ReadData_Response * lhs, const robo_interfaces__srv__ReadData_Response * rhs)
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
  // servo_data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->servo_data), &(rhs->servo_data)))
  {
    return false;
  }
  return true;
}

bool
robo_interfaces__srv__ReadData_Response__copy(
  const robo_interfaces__srv__ReadData_Response * input,
  robo_interfaces__srv__ReadData_Response * output)
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
  // servo_data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->servo_data), &(output->servo_data)))
  {
    return false;
  }
  return true;
}

robo_interfaces__srv__ReadData_Response *
robo_interfaces__srv__ReadData_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ReadData_Response * msg = (robo_interfaces__srv__ReadData_Response *)allocator.allocate(sizeof(robo_interfaces__srv__ReadData_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__srv__ReadData_Response));
  bool success = robo_interfaces__srv__ReadData_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__srv__ReadData_Response__destroy(robo_interfaces__srv__ReadData_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__srv__ReadData_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__srv__ReadData_Response__Sequence__init(robo_interfaces__srv__ReadData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ReadData_Response * data = NULL;

  if (size) {
    data = (robo_interfaces__srv__ReadData_Response *)allocator.zero_allocate(size, sizeof(robo_interfaces__srv__ReadData_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__srv__ReadData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__srv__ReadData_Response__fini(&data[i - 1]);
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
robo_interfaces__srv__ReadData_Response__Sequence__fini(robo_interfaces__srv__ReadData_Response__Sequence * array)
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
      robo_interfaces__srv__ReadData_Response__fini(&array->data[i]);
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

robo_interfaces__srv__ReadData_Response__Sequence *
robo_interfaces__srv__ReadData_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ReadData_Response__Sequence * array = (robo_interfaces__srv__ReadData_Response__Sequence *)allocator.allocate(sizeof(robo_interfaces__srv__ReadData_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__srv__ReadData_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__srv__ReadData_Response__Sequence__destroy(robo_interfaces__srv__ReadData_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__srv__ReadData_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__srv__ReadData_Response__Sequence__are_equal(const robo_interfaces__srv__ReadData_Response__Sequence * lhs, const robo_interfaces__srv__ReadData_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__srv__ReadData_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__srv__ReadData_Response__Sequence__copy(
  const robo_interfaces__srv__ReadData_Response__Sequence * input,
  robo_interfaces__srv__ReadData_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__srv__ReadData_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__srv__ReadData_Response * data =
      (robo_interfaces__srv__ReadData_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__srv__ReadData_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__srv__ReadData_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__srv__ReadData_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
