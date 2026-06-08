// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/RoombaState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/roomba_state.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__RoombaState __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__RoombaState __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoombaState_
{
  using Type = RoombaState_<ContainerAllocator>;

  explicit RoombaState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0.0f;
      this->current_status = "";
      this->power_mode = "";
    }
  }

  explicit RoombaState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_status(_alloc),
    power_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0.0f;
      this->current_status = "";
      this->power_mode = "";
    }
  }

  // field types and members
  using _battery_level_type =
    float;
  _battery_level_type battery_level;
  using _current_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_status_type current_status;
  using _power_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _power_mode_type power_mode;

  // setters for named parameter idiom
  Type & set__battery_level(
    const float & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__current_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_status = _arg;
    return *this;
  }
  Type & set__power_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->power_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::RoombaState_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::RoombaState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::RoombaState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::RoombaState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__RoombaState
    std::shared_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__RoombaState
    std::shared_ptr<custom_interfaces::msg::RoombaState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoombaState_ & other) const
  {
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->current_status != other.current_status) {
      return false;
    }
    if (this->power_mode != other.power_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoombaState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoombaState_

// alias to use template instance with default allocator
using RoombaState =
  custom_interfaces::msg::RoombaState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROOMBA_STATE__STRUCT_HPP_
