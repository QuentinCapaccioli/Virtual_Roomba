// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/RoombaState.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/roomba_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_status`
// Member `power_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interfaces__msg__RoombaState__init(custom_interfaces__msg__RoombaState * msg)
{
  if (!msg) {
    return false;
  }
  // battery_level
  // current_status
  if (!rosidl_runtime_c__String__init(&msg->current_status)) {
    custom_interfaces__msg__RoombaState__fini(msg);
    return false;
  }
  // power_mode
  if (!rosidl_runtime_c__String__init(&msg->power_mode)) {
    custom_interfaces__msg__RoombaState__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces__msg__RoombaState__fini(custom_interfaces__msg__RoombaState * msg)
{
  if (!msg) {
    return;
  }
  // battery_level
  // current_status
  rosidl_runtime_c__String__fini(&msg->current_status);
  // power_mode
  rosidl_runtime_c__String__fini(&msg->power_mode);
}

bool
custom_interfaces__msg__RoombaState__are_equal(const custom_interfaces__msg__RoombaState * lhs, const custom_interfaces__msg__RoombaState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_status), &(rhs->current_status)))
  {
    return false;
  }
  // power_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->power_mode), &(rhs->power_mode)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__RoombaState__copy(
  const custom_interfaces__msg__RoombaState * input,
  custom_interfaces__msg__RoombaState * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  // current_status
  if (!rosidl_runtime_c__String__copy(
      &(input->current_status), &(output->current_status)))
  {
    return false;
  }
  // power_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->power_mode), &(output->power_mode)))
  {
    return false;
  }
  return true;
}

custom_interfaces__msg__RoombaState *
custom_interfaces__msg__RoombaState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__RoombaState * msg = (custom_interfaces__msg__RoombaState *)allocator.allocate(sizeof(custom_interfaces__msg__RoombaState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__RoombaState));
  bool success = custom_interfaces__msg__RoombaState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__RoombaState__destroy(custom_interfaces__msg__RoombaState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__RoombaState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__RoombaState__Sequence__init(custom_interfaces__msg__RoombaState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__RoombaState * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__RoombaState *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__RoombaState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__RoombaState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__RoombaState__fini(&data[i - 1]);
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
custom_interfaces__msg__RoombaState__Sequence__fini(custom_interfaces__msg__RoombaState__Sequence * array)
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
      custom_interfaces__msg__RoombaState__fini(&array->data[i]);
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

custom_interfaces__msg__RoombaState__Sequence *
custom_interfaces__msg__RoombaState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__RoombaState__Sequence * array = (custom_interfaces__msg__RoombaState__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__RoombaState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__RoombaState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__RoombaState__Sequence__destroy(custom_interfaces__msg__RoombaState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__RoombaState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__RoombaState__Sequence__are_equal(const custom_interfaces__msg__RoombaState__Sequence * lhs, const custom_interfaces__msg__RoombaState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__RoombaState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__RoombaState__Sequence__copy(
  const custom_interfaces__msg__RoombaState__Sequence * input,
  custom_interfaces__msg__RoombaState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__RoombaState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__RoombaState * data =
      (custom_interfaces__msg__RoombaState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__RoombaState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__RoombaState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__RoombaState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
