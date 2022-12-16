cmake_minimum_required(VERSION 3.24)
project(tsim)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
add_executable(tsim main.cpp)

target_link_libraries(tsim ${CURSES_LIBRARY})
target_link_libraries(tsim m)
