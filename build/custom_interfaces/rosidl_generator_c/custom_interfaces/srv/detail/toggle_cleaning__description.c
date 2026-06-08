// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:srv/ToggleCleaning.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/srv/detail/toggle_cleaning__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__srv__ToggleCleaning__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x24, 0x2c, 0x68, 0x20, 0x79, 0x48, 0x44,
      0x67, 0xa1, 0x53, 0x4d, 0xbd, 0x24, 0xbf, 0x54,
      0x89, 0xeb, 0x39, 0x91, 0x42, 0xc6, 0x5f, 0x0c,
      0xa7, 0x2a, 0xf9, 0xff, 0xde, 0x03, 0xe5, 0x97,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__srv__ToggleCleaning_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0xfe, 0x4b, 0x2c, 0x7b, 0xb0, 0x0e, 0x23,
      0x33, 0x06, 0xc2, 0x91, 0x29, 0xd6, 0x55, 0x92,
      0xd7, 0xea, 0x03, 0x74, 0x84, 0x32, 0xc9, 0x6d,
      0x17, 0x43, 0xd3, 0xa5, 0x42, 0x7b, 0x2e, 0x9d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__srv__ToggleCleaning_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xf7, 0x0d, 0x8c, 0xa3, 0x68, 0xdc, 0xde,
      0x79, 0xcd, 0xa4, 0x1a, 0x41, 0xc0, 0x65, 0x3d,
      0xa0, 0x7a, 0xfe, 0x03, 0x72, 0x1e, 0x75, 0xfd,
      0xf9, 0xd0, 0x45, 0x10, 0x3e, 0x4d, 0xdc, 0xc9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__srv__ToggleCleaning_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x9f, 0xb9, 0x63, 0xeb, 0x67, 0xb9, 0x26,
      0x5e, 0xbb, 0x49, 0x43, 0xb0, 0xe8, 0x91, 0xf3,
      0x65, 0xc9, 0x2f, 0xb2, 0x28, 0x49, 0x37, 0x95,
      0x3c, 0x7f, 0x12, 0x63, 0xd5, 0x55, 0xda, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char custom_interfaces__srv__ToggleCleaning__TYPE_NAME[] = "custom_interfaces/srv/ToggleCleaning";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_interfaces__srv__ToggleCleaning_Event__TYPE_NAME[] = "custom_interfaces/srv/ToggleCleaning_Event";
static char custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME[] = "custom_interfaces/srv/ToggleCleaning_Request";
static char custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME[] = "custom_interfaces/srv/ToggleCleaning_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char custom_interfaces__srv__ToggleCleaning__FIELD_NAME__request_message[] = "request_message";
static char custom_interfaces__srv__ToggleCleaning__FIELD_NAME__response_message[] = "response_message";
static char custom_interfaces__srv__ToggleCleaning__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_interfaces__srv__ToggleCleaning__FIELDS[] = {
  {
    {custom_interfaces__srv__ToggleCleaning__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_interfaces__srv__ToggleCleaning_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_interfaces__srv__ToggleCleaning__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__srv__ToggleCleaning__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__srv__ToggleCleaning__TYPE_NAME, 36, 36},
      {custom_interfaces__srv__ToggleCleaning__FIELDS, 3, 3},
    },
    {custom_interfaces__srv__ToggleCleaning__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_interfaces__srv__ToggleCleaning_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_interfaces__srv__ToggleCleaning_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_interfaces__srv__ToggleCleaning_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_interfaces__srv__ToggleCleaning_Request__FIELD_NAME__start_cleaning[] = "start_cleaning";

static rosidl_runtime_c__type_description__Field custom_interfaces__srv__ToggleCleaning_Request__FIELDS[] = {
  {
    {custom_interfaces__srv__ToggleCleaning_Request__FIELD_NAME__start_cleaning, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__srv__ToggleCleaning_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME, 44, 44},
      {custom_interfaces__srv__ToggleCleaning_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_interfaces__srv__ToggleCleaning_Response__FIELD_NAME__success[] = "success";
static char custom_interfaces__srv__ToggleCleaning_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field custom_interfaces__srv__ToggleCleaning_Response__FIELDS[] = {
  {
    {custom_interfaces__srv__ToggleCleaning_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Response__FIELD_NAME__message, 7, 7},
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
custom_interfaces__srv__ToggleCleaning_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME, 45, 45},
      {custom_interfaces__srv__ToggleCleaning_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_interfaces__srv__ToggleCleaning_Event__FIELD_NAME__info[] = "info";
static char custom_interfaces__srv__ToggleCleaning_Event__FIELD_NAME__request[] = "request";
static char custom_interfaces__srv__ToggleCleaning_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_interfaces__srv__ToggleCleaning_Event__FIELDS[] = {
  {
    {custom_interfaces__srv__ToggleCleaning_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_interfaces__srv__ToggleCleaning_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__srv__ToggleCleaning_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__srv__ToggleCleaning_Event__TYPE_NAME, 42, 42},
      {custom_interfaces__srv__ToggleCleaning_Event__FIELDS, 3, 3},
    },
    {custom_interfaces__srv__ToggleCleaning_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_interfaces__srv__ToggleCleaning_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_interfaces__srv__ToggleCleaning_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool start_cleaning      # True = d\\xc3\\xa9marrer, False = arr\\xc3\\xaater\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__srv__ToggleCleaning__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__srv__ToggleCleaning__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 91, 91},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__srv__ToggleCleaning_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__srv__ToggleCleaning_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__srv__ToggleCleaning_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__srv__ToggleCleaning_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__srv__ToggleCleaning_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__srv__ToggleCleaning_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__srv__ToggleCleaning__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__srv__ToggleCleaning__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_interfaces__srv__ToggleCleaning_Event__get_individual_type_description_source(NULL);
    sources[3] = *custom_interfaces__srv__ToggleCleaning_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_interfaces__srv__ToggleCleaning_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__srv__ToggleCleaning_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__srv__ToggleCleaning_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__srv__ToggleCleaning_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__srv__ToggleCleaning_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__srv__ToggleCleaning_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__srv__ToggleCleaning_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_interfaces__srv__ToggleCleaning_Request__get_individual_type_description_source(NULL);
    sources[3] = *custom_interfaces__srv__ToggleCleaning_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
