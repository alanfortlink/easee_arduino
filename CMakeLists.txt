cmake_minimum_required(VERSION 3.8.2)

project(Hello_World)

arduino_cmake_project(Hello_World BOARD_NAME mega BOARD_CPU atmega2560)

add_arduino_executable(Hello_World easee/test.cpp)

set_target_upload_port(Hello_World /dev/cu.usbmodem143301)
