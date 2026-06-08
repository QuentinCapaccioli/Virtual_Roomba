// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/RoombaState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/roomba_state.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/roomba_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoombaState & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: current_status
  {
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
    out << ", ";
  }

  // member: power_mode
  {
    out << "power_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.power_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoombaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
    out << "\n";
  }

  // member: power_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.power_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoombaState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::RoombaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::RoombaState & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::RoombaState>()
{
  return "custom_interfaces::msg::RoombaState";
}

template<>
inline const char * name<custom_interfaces::msg::RoombaState>()
{
  return "custom_interfaces/msg/RoombaState";
}

template<>
struct has_fixed_size<custom_interfaces::msg::RoombaState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::RoombaState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::RoombaState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__TRAITS_HPP_
