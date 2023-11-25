cmake_minimum_required(VERSION 3.10)


project(
    CPPMemoryChecker_Test
)

add_subdirectory(vendors)


file(
    GLOB
    SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)


add_executable(
    ${PROJECT_NAME}
    ${SRC_FILES}
)


target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC
    gtest
    gmock
)