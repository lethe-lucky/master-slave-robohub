// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_interfaces:srv/WriteData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__STRUCT_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__WriteData_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__WriteData_Request __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WriteData_Request_
{
  using Type = WriteData_Request_<ContainerAllocator>;

  explicit WriteData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->servo_id = 0;
      this->value1 = 0l;
    }
  }

  explicit WriteData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->servo_id = 0;
      this->value1 = 0l;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _servo_id_type =
    uint8_t;
  _servo_id_type servo_id;
  using _value1_type =
    int32_t;
  _value1_type value1;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__servo_id(
    const uint8_t & _arg)
  {
    this->servo_id = _arg;
    return *this;
  }
  Type & set__value1(
    const int32_t & _arg)
  {
    this->value1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::WriteData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::WriteData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::WriteData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::WriteData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__WriteData_Request
    std::shared_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__WriteData_Request
    std::shared_ptr<robo_interfaces::srv::WriteData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteData_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->servo_id != other.servo_id) {
      return false;
    }
    if (this->value1 != other.value1) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteData_Request_

// alias to use template instance with default allocator
using WriteData_Request =
  robo_interfaces::srv::WriteData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__WriteData_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__WriteData_Response __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WriteData_Response_
{
  using Type = WriteData_Response_<ContainerAllocator>;

  explicit WriteData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit WriteData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::WriteData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::WriteData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::WriteData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::WriteData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__WriteData_Response
    std::shared_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__WriteData_Response
    std::shared_ptr<robo_interfaces::srv::WriteData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteData_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteData_Response_

// alias to use template instance with default allocator
using WriteData_Response =
  robo_interfaces::srv::WriteData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces

namespace robo_interfaces
{

namespace srv
{

struct WriteData
{
  using Request = robo_interfaces::srv::WriteData_Request;
  using Response = robo_interfaces::srv::WriteData_Response;
};

}  // namespace srv

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__STRUCT_HPP_
