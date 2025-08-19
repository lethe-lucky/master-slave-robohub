// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_interfaces:srv/WriteData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__TRAITS_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo_interfaces/srv/detail/write_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WriteData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: servo_id
  {
    out << "servo_id: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_id, out);
    out << ", ";
  }

  // member: value1
  {
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WriteData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: servo_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_id: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_id, out);
    out << "\n";
  }

  // member: value1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WriteData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::srv::WriteData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::WriteData_Request & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::WriteData_Request>()
{
  return "robo_interfaces::srv::WriteData_Request";
}

template<>
inline const char * name<robo_interfaces::srv::WriteData_Request>()
{
  return "robo_interfaces/srv/WriteData_Request";
}

template<>
struct has_fixed_size<robo_interfaces::srv::WriteData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_interfaces::srv::WriteData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_interfaces::srv::WriteData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WriteData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WriteData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WriteData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::srv::WriteData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::WriteData_Response & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::WriteData_Response>()
{
  return "robo_interfaces::srv::WriteData_Response";
}

template<>
inline const char * name<robo_interfaces::srv::WriteData_Response>()
{
  return "robo_interfaces/srv/WriteData_Response";
}

template<>
struct has_fixed_size<robo_interfaces::srv::WriteData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_interfaces::srv::WriteData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_interfaces::srv::WriteData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_interfaces::srv::WriteData>()
{
  return "robo_interfaces::srv::WriteData";
}

template<>
inline const char * name<robo_interfaces::srv::WriteData>()
{
  return "robo_interfaces/srv/WriteData";
}

template<>
struct has_fixed_size<robo_interfaces::srv::WriteData>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_interfaces::srv::WriteData_Request>::value &&
    has_fixed_size<robo_interfaces::srv::WriteData_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_interfaces::srv::WriteData>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_interfaces::srv::WriteData_Request>::value &&
    has_bounded_size<robo_interfaces::srv::WriteData_Response>::value
  >
{
};

template<>
struct is_service<robo_interfaces::srv::WriteData>
  : std::true_type
{
};

template<>
struct is_service_request<robo_interfaces::srv::WriteData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_interfaces::srv::WriteData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_INTERFACES__SRV__DETAIL__WRITE_DATA__TRAITS_HPP_
