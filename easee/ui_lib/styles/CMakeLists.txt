set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/color.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/textstyle.cpp
)

add_library(ui_lib_styles STATIC ${SOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
