arduino_cmake_project(easee BOARD_NAME mega BOARD_CPU atmega2560)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ui_lib)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/components_lib)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/easee_widgets)

# MAIN FILE
set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/easee.cpp)

add_arduino_executable(easee_exec ${SOURCES})
target_link_libraries(easee_exec PUBLIC components_lib_sensors 
                                        components_lib_displays 
                                        ui_lib_widgets 
                                        ui_lib_styles 
                                        easee_widgets)

set_target_upload_port(easee_exec atmega2560 /dev/cu.usbmodem143301)
