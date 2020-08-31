cmake_minimum_required(VERSION 3.8.2)

project(Easee)

arduino_cmake_project(easee BOARD_NAME mega BOARD_CPU atmega2560)

include_directories(easee easee/display easee/sensors easee/widgets)

set(SOURCES easee/easee.cpp easee/widgets/color.cpp easee/display/display.cpp easee/display/touch_display.cpp)

add_arduino_executable(easee_exec ${SOURCES})

set_target_upload_port(easee_exec atmega2560 /dev/cu.usbmodem143301)
