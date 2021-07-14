cmake_minimum_required(VERSION 3.0)
project(ObjLibDedupBug)

add_library(${CMAKE_PROJECT_NAME}_lib OBJECT
    src/namespace1/result.cpp
    src/namespace2/result.cpp
)

target_include_directories(${PROJECT_NAME}_lib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/>
)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME} ${CMAKE_PROJECT_NAME}_lib)
