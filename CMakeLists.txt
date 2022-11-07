cmake_minimum_required(VERSION 3.23)
project(mockTest_1)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB ALL_SOURCE "*.cpp" "*.c"
        src/*.cpp
        testSrc/*.cpp
        mockSrc/*.cpp)

file(GLOB ALL_HEAD "*.hpp" "*.h"
        include/*.h
        testSuits/*.h)

add_executable(mockTest_1 ${ALL_SOURCE} ${ALL_HEAD} )

target_link_libraries(mockTest_1 gtest gmock gtest_main pthread)