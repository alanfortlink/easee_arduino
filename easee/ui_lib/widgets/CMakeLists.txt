set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/card.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/rect.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/text.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/widget.cpp
)

add_arduino_library(ui_lib_widgets ${SOURCES})
target_link_libraries(ui_lib_widgets ui_lib_styles components_lib_displays)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
