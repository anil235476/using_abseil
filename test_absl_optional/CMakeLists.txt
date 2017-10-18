cmake_minimum_required (VERSION 3.2)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin/)


include_directories(
${CMAKE_HOME_DIRECTORY}/abseil-cpp
)

set(
	ABSL_SOURCE
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/types/optional.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/types/bad_optional_access.cc
)

add_executable(test_absl_optional
	main.cxx
	${ABSL_SOURCE}

)

