cmake_minimum_required (VERSION 3.2)

project (test_absl)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin/)


include_directories(
abseil-cpp
)

add_subdirectory(test_absl_string)
add_subdirectory(test_absl_optional)

