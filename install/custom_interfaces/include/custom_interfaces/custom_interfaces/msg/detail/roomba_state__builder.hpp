// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/RoombaState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/roomba_state.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/roomba_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_RoombaState_power_mode
{
public:
  explicit Init_RoombaState_power_mode(::custom_interfaces::msg::RoombaState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::RoombaState power_mode(::custom_interfaces::msg::RoombaState::_power_mode_type arg)
  {
    msg_.power_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::RoombaState msg_;
};

class Init_RoombaState_current_status
{
public:
  explicit Init_RoombaState_current_status(::custom_interfaces::msg::RoombaState & msg)
  : msg_(msg)
  {}
  Init_RoombaState_power_mode current_status(::custom_interfaces::msg::RoombaState::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return Init_RoombaState_power_mode(msg_);
  }

private:
  ::custom_interfaces::msg::RoombaState msg_;
};

class Init_RoombaState_battery_level
{
public:
  Init_RoombaState_battery_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoombaState_current_status battery_level(::custom_interfaces::msg::RoombaState::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_RoombaState_current_status(msg_);
  }

private:
  ::custom_interfaces::msg::RoombaState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::RoombaState>()
{
  return custom_interfaces::msg::builder::Init_RoombaState_battery_level();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__BUILDER_HPP_
