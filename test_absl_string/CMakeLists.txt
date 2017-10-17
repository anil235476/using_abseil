cmake_minimum_required (VERSION 3.2)

project (test_string)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin/)


include_directories(
${CMAKE_HOME_DIRECTORY}/abseil-cpp
)

set(
	ABSL_SOURCE
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/strings/str_split.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/strings/string_view.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/strings/match.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/strings/ascii.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/strings/internal/memutil.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/base/internal/raw_logging.cc
	${CMAKE_HOME_DIRECTORY}/abseil-cpp/absl/base/internal/throw_delegate.cc
	
)

add_executable(test_absl_string
	main.cxx
	${ABSL_SOURCE}

)

