//
// Created by zhy on 25-1-22.
//
#include "my_package/my_node.h"
#include "my_msgs/msg/my.hpp"
#include <chrono>
#include <memory>
#include <string>

my_node::my_node() : my_node(rclcpp::NodeOptions()){}
my_node::my_node(const rclcpp::NodeOptions& options): Node("my_node", options) {
    RCLCPP_INFO(get_logger(), "init");
    string_subscription_ = create_subscription<std_msgs::msg::String>(
    "receive",
    10,
    std::bind(&my_node::subscription_callback, this, std::placeholders::_1)
    );
    string_publisher_ = create_publisher<std_msgs::msg::String>(
    "send",
    10
    );
    timer_publisher_ = create_publisher<std_msgs::msg::String>(
    "timer_",
    10
    );
    timer_ = create_wall_timer(
    std::chrono::milliseconds(1000), // 定时器间隔
    std::bind(&my_node::timer_callback, this)); // 回调函数

    my_message_publisher_ = create_publisher<my_msgs::msg::My>(
    "my_msg",
    10
    );
    my_message_subscription_ = create_subscription<my_msgs::msg::My>(
    "my_msg",
    10,
    std::bind(&my_node::my_message_callback,this,std::placeholders::_1)
    );
}
void my_node::subscription_callback(const std_msgs::msg::String::SharedPtr msg) {
    auto message = std_msgs::msg::String();
    message.data = "I can hear:" + msg->data;
    RCLCPP_INFO(get_logger(), "I hear %s", msg->data.c_str());
    string_publisher_->publish(message);
}
void my_node::timer_callback()
{
    RCLCPP_INFO(get_logger(), "%d s", ++cnt_);
    auto time_msg = std_msgs::msg::String();
    time_msg.data = "Now is " + std::to_string(cnt_);
    timer_publisher_->publish(time_msg);
    auto self_msg = my_msgs::msg::My();
    self_msg.header = std_msgs::msg::Header();
    self_msg.id = 1;
    self_msg.yaw = 123.45;
    self_msg.detect_success = true;
    my_message_publisher_->publish(self_msg);

    }
void my_node::my_message_callback(const my_msgs::msg::My::SharedPtr msg)
{
    RCLCPP_INFO(get_logger(),"id %d , yaw %f , detect_success %d",msg->id,msg->yaw,msg->detect_success);
}