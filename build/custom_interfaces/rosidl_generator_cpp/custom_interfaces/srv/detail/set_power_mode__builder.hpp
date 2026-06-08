// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SetPowerMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/set_power_mode.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_POWER_MODE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_POWER_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/set_power_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPowerMode_Request_power_mode
{
public:
  Init_SetPowerMode_Request_power_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SetPowerMode_Request power_mode(::custom_interfaces::srv::SetPowerMode_Request::_power_mode_type arg)
  {
    msg_.power_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetPowerMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetPowerMode_Request>()
{
  return custom_interfaces::srv::builder::Init_SetPowerMode_Request_power_mode();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPowerMode_Response_message
{
public:
  explicit Init_SetPowerMode_Response_message(::custom_interfaces::srv::SetPowerMode_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SetPowerMode_Response message(::custom_interfaces::srv::SetPowerMode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetPowerMode_Response msg_;
};

class Init_SetPowerMode_Response_success
{
public:
  Init_SetPowerMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPowerMode_Response_message success(::custom_interfaces::srv::SetPowerMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetPowerMode_Response_message(msg_);
  }

private:
  ::custom_interfaces::srv::SetPowerMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetPowerMode_Response>()
{
  return custom_interfaces::srv::builder::Init_SetPowerMode_Response_success();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPowerMode_Event_response
{
public:
  explicit Init_SetPowerMode_Event_response(::custom_interfaces::srv::SetPowerMode_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SetPowerMode_Event response(::custom_interfaces::srv::SetPowerMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetPowerMode_Event msg_;
};

class Init_SetPowerMode_Event_request
{
public:
  explicit Init_SetPowerMode_Event_request(::custom_interfaces::srv::SetPowerMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetPowerMode_Event_response request(::custom_interfaces::srv::SetPowerMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPowerMode_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::SetPowerMode_Event msg_;
};

class Init_SetPowerMode_Event_info
{
public:
  Init_SetPowerMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPowerMode_Event_request info(::custom_interfaces::srv::SetPowerMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetPowerMode_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::SetPowerMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetPowerMode_Event>()
{
  return custom_interfaces::srv::builder::Init_SetPowerMode_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_POWER_MODE__BUILDER_HPP_
