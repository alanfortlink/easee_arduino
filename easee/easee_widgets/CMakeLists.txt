set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/home.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/humidity_card.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/luminosity_card.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/temperature_card.cpp
)

add_library(easee_widgets STATIC ${SOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
