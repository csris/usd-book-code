cmake_minimum_required(VERSION 3.26)

project(usd
	VERSION 0.0.1
	LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)

# googletest

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

# benchmark

FetchContent_Declare(
	benchmark
	URL https://github.com/google/benchmark/archive/refs/tags/v1.8.4.zip
)
FetchContent_MakeAvailable(benchmark)


add_subdirectory(book)
add_subdirectory(src)
