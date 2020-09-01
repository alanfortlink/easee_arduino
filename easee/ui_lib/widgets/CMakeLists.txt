set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/card.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/rect.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/text.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/widget.cpp
)

add_library(ui_lib_widgets STATIC ${SOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
