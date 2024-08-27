cmake_minimum_required(VERSION 3.5.0)
project(CPUAloc VERSION 0.1.0 LANGUAGES C CXX)

add_executable(CPUAloc "src/main.cpp" "src/main.cpp" "src/include.hpp" "src/Process.cpp")

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
