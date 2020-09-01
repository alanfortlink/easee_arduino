set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/display.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/lcd_display.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/touch_display.cpp
)

add_arduino_library(components_lib_displays ${SOURCES})
target_link_libraries(components_lib_displays PUBLIC ui_lib_styles)

find_arduino_library(mcufriend_lib2 MCUFRIEND_kbv 3RD_PARTY)
link_arduino_library(components_lib_displays mcufriend_lib2)

find_arduino_library(adafruit_GFX_lib2 Adafruit_GFX_Library 3RD_PARTY)
link_arduino_library(components_lib_displays adafruit_GFX_lib2)

find_arduino_library(dht_lib2 DHTlib 3RD_PARTY)
link_arduino_library(components_lib_displays dht_lib2)

include_directories(${CMAKE_SOURCE_DIR}/libraries/Adafruit_GFX_Library)
include_directories(${CMAKE_SOURCE_DIR}/libraries/Adafruit_BusIO)
include_directories(${CMAKE_SOURCE_DIR}/libraries/MCUFRIEND_kbv)
include_directories(${CMAKE_SOURCE_DIR}/libraries/DHTlib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
