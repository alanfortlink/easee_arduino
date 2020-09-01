arduino_cmake_project(easee BOARD_NAME mega BOARD_CPU atmega2560)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/libraries/Adafruit_GFX_Library)
include_directories(${CMAKE_SOURCE_DIR}/libraries/Adafruit_BusIO)
include_directories(${CMAKE_SOURCE_DIR}/libraries/MCUFRIEND_kbv)
include_directories(${CMAKE_SOURCE_DIR}/libraries/DHTlib)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/components_lib)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ui_lib)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/easee_widgets)

# MAIN FILE
set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/easee.cpp)

add_arduino_executable(easee_exec ${SOURCES})

find_arduino_library(adafruit_GFX_lib Adafruit_GFX_Library 3RD_PARTY)
link_arduino_library(easee_exec adafruit_GFX_lib)

find_arduino_library(mcufriend_lib MCUFRIEND_kbv 3RD_PARTY)
link_arduino_library(easee_exec mcufriend_lib)

find_arduino_library(dht_lib DHTlib 3RD_PARTY)
link_arduino_library(easee_exec dht_lib)

set_target_upload_port(easee_exec atmega2560 /dev/cu.usbmodem143301)
