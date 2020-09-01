set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/display.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/lcd_display.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/touch_display.cpp
)

add_library(components_lib_displays STATIC ${SOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
