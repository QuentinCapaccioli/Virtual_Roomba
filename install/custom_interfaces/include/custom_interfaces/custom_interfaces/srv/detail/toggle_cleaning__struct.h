// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/ToggleCleaning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/toggle_cleaning.h"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TOGGLE_CLEANING__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__TOGGLE_CLEANING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ToggleCleaning in the package custom_interfaces.
typedef struct custom_interfaces__srv__ToggleCleaning_Request
{
  /// True = démarrer, False = arrêter
  bool start_cleaning;
} custom_interfaces__srv__ToggleCleaning_Request;

// Struct for a sequence of custom_interfaces__srv__ToggleCleaning_Request.
typedef struct custom_interfaces__srv__ToggleCleaning_Request__Sequence
{
  custom_interfaces__srv__ToggleCleaning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ToggleCleaning_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ToggleCleaning in the package custom_interfaces.
typedef struct custom_interfaces__srv__ToggleCleaning_Response
{
  bool success;
  rosidl_runtime_c__String message;
} custom_interfaces__srv__ToggleCleaning_Response;

// Struct for a sequence of custom_interfaces__srv__ToggleCleaning_Response.
typedef struct custom_interfaces__srv__ToggleCleaning_Response__Sequence
{
  custom_interfaces__srv__ToggleCleaning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ToggleCleaning_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_interfaces__srv__ToggleCleaning_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_interfaces__srv__ToggleCleaning_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ToggleCleaning in the package custom_interfaces.
typedef struct custom_interfaces__srv__ToggleCleaning_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_interfaces__srv__ToggleCleaning_Request__Sequence request;
  custom_interfaces__srv__ToggleCleaning_Response__Sequence response;
} custom_interfaces__srv__ToggleCleaning_Event;

// Struct for a sequence of custom_interfaces__srv__ToggleCleaning_Event.
typedef struct custom_interfaces__srv__ToggleCleaning_Event__Sequence
{
  custom_interfaces__srv__ToggleCleaning_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ToggleCleaning_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TOGGLE_CLEANING__STRUCT_H_
