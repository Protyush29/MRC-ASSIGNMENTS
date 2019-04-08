cmake_minimum_required(VERSION 2.6)
project(polygon_test)

set(CMAKE_CXX_STANDARD 11)
include_directories(
    .
)

add_executable(test_polygon
    polygon.cpp
    test_polygon.cpp
)

target_link_libraries(test_polygon)
