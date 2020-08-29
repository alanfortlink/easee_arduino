set(CMAKE_TOOLCHAIN_FILE cmake/ArduinoToolchain.cmake)

#TODO: Update
cmake_minimum_required(VERSION 2.8)

project(Easee LANGUAGES C CPP)

set(ARDUINO_DEFAULT_BOARD mega)
set(ARDUINO_DEFAULT_PORT /dev/ttyACM0)

set(SOURCES main/main.cpp)
generate_arduino_firmware(easee SRCS ${SOURCES})
