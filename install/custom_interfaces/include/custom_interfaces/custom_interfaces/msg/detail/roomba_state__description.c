// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/RoombaState.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/roomba_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__RoombaState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x7a, 0xb7, 0x2c, 0x77, 0xbb, 0xd0, 0xad,
      0xb4, 0xf3, 0x84, 0xb0, 0x54, 0x7e, 0xbd, 0x2f,
      0x1a, 0xc2, 0xb7, 0x40, 0x89, 0x09, 0xce, 0x2e,
      0x30, 0xb9, 0xc7, 0x88, 0x82, 0x4e, 0xb3, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__RoombaState__TYPE_NAME[] = "custom_interfaces/msg/RoombaState";

// Define type names, field names, and default values
static char custom_interfaces__msg__RoombaState__FIELD_NAME__battery_level[] = "battery_level";
static char custom_interfaces__msg__RoombaState__FIELD_NAME__current_status[] = "current_status";
static char custom_interfaces__msg__RoombaState__FIELD_NAME__power_mode[] = "power_mode";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__RoombaState__FIELDS[] = {
  {
    {custom_interfaces__msg__RoombaState__FIELD_NAME__battery_level, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__RoombaState__FIELD_NAME__current_status, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__RoombaState__FIELD_NAME__power_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__RoombaState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__RoombaState__TYPE_NAME, 33, 33},
      {custom_interfaces__msg__RoombaState__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 battery_level    # Niveau de batterie (0 \\xc3\\xa0 100)\n"
  "string current_status    # \\xc3\\x89tat du robot : \"IDLE\", \"CLEANING\" ou \"DEAD\"\n"
  "string power_mode        # Mode de puissance courant : \"NORMAL\", \"ECO\" ou \"TURBO\"";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__RoombaState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__RoombaState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 209, 209},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__RoombaState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__RoombaState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
