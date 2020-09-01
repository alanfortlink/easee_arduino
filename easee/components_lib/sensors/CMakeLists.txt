set(SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/gyro.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/luminosity.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/provider.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/temperature.cpp
)

add_library(components_lib_sensors STATIC ${SOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
