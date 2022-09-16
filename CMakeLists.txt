cmake_minimum_required(VERSION 3.15)
project(network-video)

set(CMAKE_CXX_STANDARD 17)

include(cmake/conan.cmake)

set(DEPS opencv/4.5.5)
list(APPEND DEPS boost/1.71.0)

conan_cmake_run(
        REQUIRES
        ${DEPS}
        GENERATORS cmake
        BUILD missing
        BASIC_SETUP CMAKE_TARGETS
)

add_subdirectory(tests)
