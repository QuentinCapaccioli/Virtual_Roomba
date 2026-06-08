// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_interfaces:srv/ToggleCleaning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_interfaces/srv/detail/toggle_cleaning__struct.h"
#include "custom_interfaces/srv/detail/toggle_cleaning__type_support.h"
#include "custom_interfaces/srv/detail/toggle_cleaning__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleCleaning_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleCleaning_Request_type_support_ids_t;

static const _ToggleCleaning_Request_type_support_ids_t _ToggleCleaning_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleCleaning_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleCleaning_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleCleaning_Request_type_support_symbol_names_t _ToggleCleaning_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ToggleCleaning_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ToggleCleaning_Request)),
  }
};

typedef struct _ToggleCleaning_Request_type_support_data_t
{
  void * data[2];
} _ToggleCleaning_Request_type_support_data_t;

static _ToggleCleaning_Request_type_support_data_t _ToggleCleaning_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleCleaning_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ToggleCleaning_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleCleaning_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleCleaning_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleCleaning_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleCleaning_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__srv__ToggleCleaning_Request__get_type_hash,
  &custom_interfaces__srv__ToggleCleaning_Request__get_type_description,
  &custom_interfaces__srv__ToggleCleaning_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, ToggleCleaning_Request)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::ToggleCleaning_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__type_support.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleCleaning_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleCleaning_Response_type_support_ids_t;

static const _ToggleCleaning_Response_type_support_ids_t _ToggleCleaning_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleCleaning_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleCleaning_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleCleaning_Response_type_support_symbol_names_t _ToggleCleaning_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ToggleCleaning_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ToggleCleaning_Response)),
  }
};

typedef struct _ToggleCleaning_Response_type_support_data_t
{
  void * data[2];
} _ToggleCleaning_Response_type_support_data_t;

static _ToggleCleaning_Response_type_support_data_t _ToggleCleaning_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleCleaning_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ToggleCleaning_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleCleaning_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleCleaning_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleCleaning_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleCleaning_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__srv__ToggleCleaning_Response__get_type_hash,
  &custom_interfaces__srv__ToggleCleaning_Response__get_type_description,
  &custom_interfaces__srv__ToggleCleaning_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, ToggleCleaning_Response)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::ToggleCleaning_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__type_support.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleCleaning_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleCleaning_Event_type_support_ids_t;

static const _ToggleCleaning_Event_type_support_ids_t _ToggleCleaning_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleCleaning_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleCleaning_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleCleaning_Event_type_support_symbol_names_t _ToggleCleaning_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ToggleCleaning_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ToggleCleaning_Event)),
  }
};

typedef struct _ToggleCleaning_Event_type_support_data_t
{
  void * data[2];
} _ToggleCleaning_Event_type_support_data_t;

static _ToggleCleaning_Event_type_support_data_t _ToggleCleaning_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleCleaning_Event_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_ToggleCleaning_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleCleaning_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleCleaning_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleCleaning_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleCleaning_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_interfaces__srv__ToggleCleaning_Event__get_type_hash,
  &custom_interfaces__srv__ToggleCleaning_Event__get_type_description,
  &custom_interfaces__srv__ToggleCleaning_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, ToggleCleaning_Event)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::ToggleCleaning_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/srv/detail/toggle_cleaning__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ToggleCleaning_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleCleaning_type_support_ids_t;

static const _ToggleCleaning_type_support_ids_t _ToggleCleaning_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleCleaning_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleCleaning_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleCleaning_type_support_symbol_names_t _ToggleCleaning_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ToggleCleaning)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ToggleCleaning)),
  }
};

typedef struct _ToggleCleaning_type_support_data_t
{
  void * data[2];
} _ToggleCleaning_type_support_data_t;

static _ToggleCleaning_type_support_data_t _ToggleCleaning_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleCleaning_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_ToggleCleaning_service_typesupport_ids.typesupport_identifier[0],
  &_ToggleCleaning_service_typesupport_symbol_names.symbol_name[0],
  &_ToggleCleaning_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ToggleCleaning_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleCleaning_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ToggleCleaning_Request_message_type_support_handle,
  &ToggleCleaning_Response_message_type_support_handle,
  &ToggleCleaning_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    srv,
    ToggleCleaning
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    srv,
    ToggleCleaning
  ),
  &custom_interfaces__srv__ToggleCleaning__get_type_hash,
  &custom_interfaces__srv__ToggleCleaning__get_type_description,
  &custom_interfaces__srv__ToggleCleaning__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, ToggleCleaning)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::ToggleCleaning_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
