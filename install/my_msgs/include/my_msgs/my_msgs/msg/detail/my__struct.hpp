// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msgs:msg/My.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__MY__STRUCT_HPP_
#define MY_MSGS__MSG__DETAIL__MY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_msgs__msg__My __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__msg__My __declspec(deprecated)
#endif

namespace my_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct My_
{
  using Type = My_<ContainerAllocator>;

  explicit My_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->yaw = 0.0;
      this->detect_success = false;
    }
  }

  explicit My_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->yaw = 0.0;
      this->detect_success = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint8_t;
  _id_type id;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _detect_success_type =
    bool;
  _detect_success_type detect_success;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__detect_success(
    const bool & _arg)
  {
    this->detect_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::msg::My_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::msg::My_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::msg::My_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::msg::My_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::My_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::My_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::My_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::My_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::msg::My_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::msg::My_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__msg__My
    std::shared_ptr<my_msgs::msg::My_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__msg__My
    std::shared_ptr<my_msgs::msg::My_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const My_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->detect_success != other.detect_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const My_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct My_

// alias to use template instance with default allocator
using My =
  my_msgs::msg::My_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__MY__STRUCT_HPP_
