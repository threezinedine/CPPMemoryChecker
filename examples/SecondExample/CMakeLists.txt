cmake_minimum_required(VERSION 3.10)

project(
    SecondExample_MemoryChecker
)


file(
    GLOB
    SRC_FILES
    *.cpp
)


add_executable(
    ${PROJECT_NAME}
    ${SRC_FILES}
)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    CPPMemoryChecker
)