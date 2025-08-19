// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_interfaces:srv/ReadData.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__SRV__DETAIL__READ_DATA__TRAITS_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__READ_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo_interfaces/srv/detail/read_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadData_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadData_Request & msg, bool use_flow_style = false)
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
  const robo_interfaces::srv::ReadData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::ReadData_Request & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::ReadData_Request>()
{
  return "robo_interfaces::srv::ReadData_Request";
}

template<>
inline const char * name<robo_interfaces::srv::ReadData_Request>()
{
  return "robo_interfaces/srv/ReadData_Request";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ReadData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_interfaces::srv::ReadData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_interfaces::srv::ReadData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_id
  {
    if (msg.servo_id.size() == 0) {
      out << "servo_id: []";
    } else {
      out << "servo_id: [";
      size_t pending_items = msg.servo_id.size();
      for (auto item : msg.servo_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servo_data
  {
    if (msg.servo_data.size() == 0) {
      out << "servo_data: []";
    } else {
      out << "servo_data: [";
      size_t pending_items = msg.servo_data.size();
      for (auto item : msg.servo_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_id.size() == 0) {
      out << "servo_id: []\n";
    } else {
      out << "servo_id:\n";
      for (auto item : msg.servo_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servo_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_data.size() == 0) {
      out << "servo_data: []\n";
    } else {
      out << "servo_data:\n";
      for (auto item : msg.servo_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadData_Response & msg, bool use_flow_style = false)
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
  const robo_interfaces::srv::ReadData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::ReadData_Response & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::ReadData_Response>()
{
  return "robo_interfaces::srv::ReadData_Response";
}

template<>
inline const char * name<robo_interfaces::srv::ReadData_Response>()
{
  return "robo_interfaces/srv/ReadData_Response";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ReadData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_interfaces::srv::ReadData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_interfaces::srv::ReadData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_interfaces::srv::ReadData>()
{
  return "robo_interfaces::srv::ReadData";
}

template<>
inline const char * name<robo_interfaces::srv::ReadData>()
{
  return "robo_interfaces/srv/ReadData";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ReadData>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_interfaces::srv::ReadData_Request>::value &&
    has_fixed_size<robo_interfaces::srv::ReadData_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_interfaces::srv::ReadData>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_interfaces::srv::ReadData_Request>::value &&
    has_bounded_size<robo_interfaces::srv::ReadData_Response>::value
  >
{
};

template<>
struct is_service<robo_interfaces::srv::ReadData>
  : std::true_type
{
};

template<>
struct is_service_request<robo_interfaces::srv::ReadData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_interfaces::srv::ReadData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_INTERFACES__SRV__DETAIL__READ_DATA__TRAITS_HPP_
