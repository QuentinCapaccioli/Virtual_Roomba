// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ToggleCleaning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/toggle_cleaning.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TOGGLE_CLEANING__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TOGGLE_CLEANING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/toggle_cleaning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleCleaning_Request_start_cleaning
{
public:
  Init_ToggleCleaning_Request_start_cleaning()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::ToggleCleaning_Request start_cleaning(::custom_interfaces::srv::ToggleCleaning_Request::_start_cleaning_type arg)
  {
    msg_.start_cleaning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ToggleCleaning_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ToggleCleaning_Request>()
{
  return custom_interfaces::srv::builder::Init_ToggleCleaning_Request_start_cleaning();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleCleaning_Response_message
{
public:
  explicit Init_ToggleCleaning_Response_message(::custom_interfaces::srv::ToggleCleaning_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ToggleCleaning_Response message(::custom_interfaces::srv::ToggleCleaning_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ToggleCleaning_Response msg_;
};

class Init_ToggleCleaning_Response_success
{
public:
  Init_ToggleCleaning_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleCleaning_Response_message success(::custom_interfaces::srv::ToggleCleaning_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ToggleCleaning_Response_message(msg_);
  }

private:
  ::custom_interfaces::srv::ToggleCleaning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ToggleCleaning_Response>()
{
  return custom_interfaces::srv::builder::Init_ToggleCleaning_Response_success();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleCleaning_Event_response
{
public:
  explicit Init_ToggleCleaning_Event_response(::custom_interfaces::srv::ToggleCleaning_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ToggleCleaning_Event response(::custom_interfaces::srv::ToggleCleaning_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ToggleCleaning_Event msg_;
};

class Init_ToggleCleaning_Event_request
{
public:
  explicit Init_ToggleCleaning_Event_request(::custom_interfaces::srv::ToggleCleaning_Event & msg)
  : msg_(msg)
  {}
  Init_ToggleCleaning_Event_response request(::custom_interfaces::srv::ToggleCleaning_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ToggleCleaning_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::ToggleCleaning_Event msg_;
};

class Init_ToggleCleaning_Event_info
{
public:
  Init_ToggleCleaning_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleCleaning_Event_request info(::custom_interfaces::srv::ToggleCleaning_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ToggleCleaning_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::ToggleCleaning_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ToggleCleaning_Event>()
{
  return custom_interfaces::srv::builder::Init_ToggleCleaning_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TOGGLE_CLEANING__BUILDER_HPP_
