// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_interfaces:msg/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__TRAITS_HPP_
#define ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo_interfaces/msg/detail/set_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetAngle & msg,
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

  // member: target_angle
  {
    if (msg.target_angle.size() == 0) {
      out << "target_angle: []";
    } else {
      out << "target_angle: [";
      size_t pending_items = msg.target_angle.size();
      for (auto item : msg.target_angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time
  {
    if (msg.time.size() == 0) {
      out << "time: []";
    } else {
      out << "time: [";
      size_t pending_items = msg.time.size();
      for (auto item : msg.time) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed
  {
    if (msg.speed.size() == 0) {
      out << "speed: []";
    } else {
      out << "speed: [";
      size_t pending_items = msg.speed.size();
      for (auto item : msg.speed) {
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
  const SetAngle & msg,
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

  // member: target_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_angle.size() == 0) {
      out << "target_angle: []\n";
    } else {
      out << "target_angle:\n";
      for (auto item : msg.target_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time.size() == 0) {
      out << "time: []\n";
    } else {
      out << "time:\n";
      for (auto item : msg.time) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
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

inline std::string to_yaml(const SetAngle & msg, bool use_flow_style = false)
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

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::msg::SetAngle & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::msg::SetAngle & msg)
{
  return robo_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::msg::SetAngle>()
{
  return "robo_interfaces::msg::SetAngle";
}

template<>
inline const char * name<robo_interfaces::msg::SetAngle>()
{
  return "robo_interfaces/msg/SetAngle";
}

template<>
struct has_fixed_size<robo_interfaces::msg::SetAngle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_interfaces::msg::SetAngle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_interfaces::msg::SetAngle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_INTERFACES__MSG__DETAIL__SET_ANGLE__TRAITS_HPP_
