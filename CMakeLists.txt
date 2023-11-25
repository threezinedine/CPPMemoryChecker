cmake_minimum_required(VERSION 3.10)


project(
    CPPMemoryChecker
    VERSION 1.0.0
    LANGUAGES CXX
)


file(
    GLOB
    SRC_FILES
    src/*.cpp
)


add_subdirectory(vendors)

add_library(
    ${PROJECT_NAME}
    STATIC
    ${SRC_FILES}
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include
)

add_subdirectory(examples)