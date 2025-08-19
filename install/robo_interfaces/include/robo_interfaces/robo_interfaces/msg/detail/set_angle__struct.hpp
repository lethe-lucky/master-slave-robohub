// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__STRUCT_HPP_
#define ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__msg__SetAngle __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__msg__SetAngle __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetAngle_
{
  using Type = SetAngle_<ContainerAllocator>;

  explicit SetAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _servo_id_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _servo_id_type servo_id;
  using _target_angle_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _target_angle_type target_angle;
  using _time_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _time_type time;
  using _speed_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__servo_id(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->servo_id = _arg;
    return *this;
  }
  Type & set__target_angle(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->target_angle = _arg;
    return *this;
  }
  Type & set__time(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__speed(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::msg::SetAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::msg::SetAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::msg::SetAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::msg::SetAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__msg__SetAngle
    std::shared_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__msg__SetAngle
    std::shared_ptr<robo_interfaces::msg::SetAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngle_ & other) const
  {
    if (this->servo_id != other.servo_id) {
      return false;
    }
    if (this->target_angle != other.target_angle) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngle_

// alias to use template instance with default allocator
using SetAngle =
  robo_interfaces::msg::SetAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__STRUCT_HPP_
