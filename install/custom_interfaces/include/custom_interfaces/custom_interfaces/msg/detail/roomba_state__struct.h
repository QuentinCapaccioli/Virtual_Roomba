// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/RoombaState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/roomba_state.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'current_status'
// Member 'power_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RoombaState in the package custom_interfaces.
typedef struct custom_interfaces__msg__RoombaState
{
  /// Niveau de batterie (0 à 100)
  float battery_level;
  /// État du robot : "IDLE", "CLEANING" ou "DEAD"
  rosidl_runtime_c__String current_status;
  /// Mode de puissance courant : "NORMAL", "ECO" ou "TURBO"
  rosidl_runtime_c__String power_mode;
} custom_interfaces__msg__RoombaState;

// Struct for a sequence of custom_interfaces__msg__RoombaState.
typedef struct custom_interfaces__msg__RoombaState__Sequence
{
  custom_interfaces__msg__RoombaState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__RoombaState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__STRUCT_H_
