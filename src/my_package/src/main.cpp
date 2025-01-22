//
// Created by zhy on 25-1-22.
//
#include "my_msgs/msg/my.hpp"
#include "my_package/my_node.h"
#include "rclcpp/rclcpp.hpp"

int main(int argc, const char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<my_node>());
  rclcpp::shutdown();
}
