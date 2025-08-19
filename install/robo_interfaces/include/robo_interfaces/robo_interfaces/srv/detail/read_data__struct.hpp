// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_interfaces:srv/ReadData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__READ_DATA__STRUCT_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__READ_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__ReadData_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__ReadData_Request __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadData_Request_
{
  using Type = ReadData_Request_<ContainerAllocator>;

  explicit ReadData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit ReadData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::ReadData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::ReadData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ReadData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ReadData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__ReadData_Request
    std::shared_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__ReadData_Request
    std::shared_ptr<robo_interfaces::srv::ReadData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadData_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadData_Request_

// alias to use template instance with default allocator
using ReadData_Request =
  robo_interfaces::srv::ReadData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__ReadData_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__ReadData_Response __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadData_Response_
{
  using Type = ReadData_Response_<ContainerAllocator>;

  explicit ReadData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ReadData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _servo_id_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _servo_id_type servo_id;
  using _servo_data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _servo_data_type servo_data;

  // setters for named parameter idiom
  Type & set__servo_id(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->servo_id = _arg;
    return *this;
  }
  Type & set__servo_data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->servo_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::ReadData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::ReadData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ReadData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ReadData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__ReadData_Response
    std::shared_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__ReadData_Response
    std::shared_ptr<robo_interfaces::srv::ReadData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadData_Response_ & other) const
  {
    if (this->servo_id != other.servo_id) {
      return false;
    }
    if (this->servo_data != other.servo_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadData_Response_

// alias to use template instance with default allocator
using ReadData_Response =
  robo_interfaces::srv::ReadData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces

namespace robo_interfaces
{

namespace srv
{

struct ReadData
{
  using Request = robo_interfaces::srv::ReadData_Request;
  using Response = robo_interfaces::srv::ReadData_Response;
};

}  // namespace srv

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__SRV__DETAIL__READ_DATA__STRUCT_HPP_
