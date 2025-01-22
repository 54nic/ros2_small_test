// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:msg/My.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__MY__BUILDER_HPP_
#define MY_MSGS__MSG__DETAIL__MY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msgs/msg/detail/my__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msgs
{

namespace msg
{

namespace builder
{

class Init_My_detect_success
{
public:
  explicit Init_My_detect_success(::my_msgs::msg::My & msg)
  : msg_(msg)
  {}
  ::my_msgs::msg::My detect_success(::my_msgs::msg::My::_detect_success_type arg)
  {
    msg_.detect_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::msg::My msg_;
};

class Init_My_yaw
{
public:
  explicit Init_My_yaw(::my_msgs::msg::My & msg)
  : msg_(msg)
  {}
  Init_My_detect_success yaw(::my_msgs::msg::My::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_My_detect_success(msg_);
  }

private:
  ::my_msgs::msg::My msg_;
};

class Init_My_id
{
public:
  explicit Init_My_id(::my_msgs::msg::My & msg)
  : msg_(msg)
  {}
  Init_My_yaw id(::my_msgs::msg::My::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_My_yaw(msg_);
  }

private:
  ::my_msgs::msg::My msg_;
};

class Init_My_header
{
public:
  Init_My_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_My_id header(::my_msgs::msg::My::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_My_id(msg_);
  }

private:
  ::my_msgs::msg::My msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::msg::My>()
{
  return my_msgs::msg::builder::Init_My_header();
}

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__MY__BUILDER_HPP_
