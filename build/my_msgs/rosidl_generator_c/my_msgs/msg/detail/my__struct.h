// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_msgs:msg/My.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__MY__STRUCT_H_
#define MY_MSGS__MSG__DETAIL__MY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/My in the package my_msgs.
typedef struct my_msgs__msg__My
{
  std_msgs__msg__Header header;
  uint8_t id;
  double yaw;
  bool detect_success;
} my_msgs__msg__My;

// Struct for a sequence of my_msgs__msg__My.
typedef struct my_msgs__msg__My__Sequence
{
  my_msgs__msg__My * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msgs__msg__My__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MSGS__MSG__DETAIL__MY__STRUCT_H_
