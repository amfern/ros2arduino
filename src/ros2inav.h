/*
 * ros2arduino.h
 *
 *  Created on: May 16, 2018
 *      Author: Kei
 */

#ifndef ROS2ARDUINO_H_
#define ROS2ARDUINO_H_

// #include <Arduino.h>
#ifdef PROFILE_UDP_TRANSPORT
#include <Udp.h>
#endif
#ifdef PROFILE_TCP_TRANSPORT
#include <Client.h>
#endif

#include "drivers/serial.h"
#include <ros2/ros2.hpp>

namespace ros2 {

bool init(serialPort_t *comm_instance);
#ifdef PROFILE_UDP_TRANSPORT
bool init(UDP *comm_instance, const char *p_server_ip, uint16_t server_port);
#endif
#ifdef PROFILE_TCP_TRANSPORT
bool init(Client *comm_instance, const char *p_server_ip, uint16_t server_port);
#endif
} /* namespace ros2 */



#endif /* ROS2ARDUINO_H_ */
