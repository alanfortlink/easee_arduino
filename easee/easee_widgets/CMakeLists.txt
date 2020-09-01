set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/home.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/humidity_card.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/luminosity_card.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/temperature_card.cpp
)

add_library(easee_widgets STATIC ${SOURCES})
target_link_libraries(easee_widgets PUBLIC components_lib_sensors components_lib_displays ui_lib_styles ui_lib_widgets)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
