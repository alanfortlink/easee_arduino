cmake_minimum_required(VERSION 3.8.2)

project(Easee)

arduino_cmake_project(easee BOARD_NAME mega BOARD_CPU atmega2560)

include_directories(easee easee/display easee/sensors easee/widgets)

include_directories(libraries/Adafruit_GFX_Library)
include_directories(libraries/Adafruit_BusIO)
include_directories(libraries/MCUFRIEND_kbv)
include_directories(libraries/DHTlib)

set(SOURCES easee/display/display.cpp 
            easee/display/touch_display.cpp
            easee/easee.cpp 
            easee/provider.cpp
            easee/sensors/gyro.cpp
            easee/sensors/luminosity.cpp
            easee/sensors/temperature.cpp
            easee/widgets/color.cpp 
            easee/widgets/component.cpp
            easee/widgets/rect.cpp
            easee/widgets/text.cpp
            easee/widgets/textstyle.cpp
            )

add_arduino_executable(easee_exec ${SOURCES})

find_arduino_library(adafruit_GFX_lib Adafruit_GFX_Library 3RD_PARTY)
link_arduino_library(easee_exec adafruit_GFX_lib)

find_arduino_library(mcufriend_lib MCUFRIEND_kbv 3RD_PARTY)
link_arduino_library(easee_exec mcufriend_lib)

find_arduino_library(dht_lib DHTlib 3RD_PARTY)
link_arduino_library(easee_exec dht_lib)

set_target_upload_port(easee_exec atmega2560 /dev/cu.usbmodem143301)
