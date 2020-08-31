cmake_minimum_required(VERSION 3.8.2)

project(Easee)

arduino_cmake_project(easee BOARD_NAME mega BOARD_CPU atmega2560)

add_arduino_executable(easee_exec easee/test.cpp)

set_target_upload_port(easee_exec atmega2560 /dev/cu.usbmodem143301)
