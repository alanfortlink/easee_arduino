set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/gyro.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/luminosity.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/provider.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/temperature.cpp
)

add_arduino_library(components_lib_sensors ${SOURCES})
target_link_libraries(components_lib_sensors PUBLIC ui_lib_styles)

find_arduino_library(mcufriend_lib MCUFRIEND_kbv 3RD_PARTY)
link_arduino_library(components_lib_sensors mcufriend_lib)

find_arduino_library(adafruit_GFX_lib Adafruit_GFX_Library 3RD_PARTY)
link_arduino_library(components_lib_sensors adafruit_GFX_lib)

find_arduino_library(dht_lib DHTlib 3RD_PARTY)
link_arduino_library(components_lib_sensors dht_lib)

include_directories(${CMAKE_SOURCE_DIR}/libraries/Adafruit_GFX_Library)
include_directories(${CMAKE_SOURCE_DIR}/libraries/Adafruit_BusIO)
include_directories(${CMAKE_SOURCE_DIR}/libraries/MCUFRIEND_kbv)
include_directories(${CMAKE_SOURCE_DIR}/libraries/DHTlib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
