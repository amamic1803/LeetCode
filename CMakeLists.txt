cmake_minimum_required(VERSION 3.29)

project(LeetCode CXX)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_CLANG_TIDY clang-tidy)
set(CMAKE_CXX_CLANG_TIDY clang-tidy)
include(CTest)

# Add the library
add_library(leetcode_lib STATIC
        src/lib/include/leetcode.hpp
        src/lib/p0001.cpp
        src/lib/p0002.cpp
        src/lib/p0006.cpp
        src/lib/p0007.cpp
        src/lib/p0008.cpp
        src/lib/p0009.cpp
        src/lib/p0012.cpp
        src/lib/p0013.cpp
        src/lib/p0014.cpp
        src/lib/p0017.cpp
        src/lib/p0019.cpp
        src/lib/p0020.cpp
        src/lib/p0021.cpp
        src/lib/p0026.cpp
        src/lib/p0027.cpp
        src/lib/p0033.cpp
        src/lib/p0035.cpp
        src/lib/p0067.cpp
        src/lib/p0069.cpp
        src/lib/p0083.cpp
        src/lib/p0088.cpp
        src/lib/p0125.cpp
        src/lib/p0190.cpp
        src/lib/p0530.cpp
        src/lib/p0783.cpp
)
target_include_directories(leetcode_lib PRIVATE src/lib/include)
set_target_properties(leetcode_lib PROPERTIES
        LANGUAGE CXX
        LINKER_LANGUAGE CXX
        OUTPUT_NAME leetcode
        PUBLIC_HEADER src/lib/include/leetcode.hpp
)

# Add the tests
add_executable(leetcode_tests src/tests/tests.hpp src/tests/tests.cpp)
target_include_directories(leetcode_tests PRIVATE src/lib/include)
target_link_libraries(leetcode_tests leetcode_lib)
set_target_properties(leetcode_tests PROPERTIES
        LANGUAGE CXX
        LINKER_LANGUAGE CXX
        OUTPUT_NAME leetcode_tests
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests
)
add_test(NAME test_p0001 COMMAND leetcode_tests 1)
add_test(NAME test_p0002 COMMAND leetcode_tests 2)
add_test(NAME test_p0006 COMMAND leetcode_tests 6)
add_test(NAME test_p0007 COMMAND leetcode_tests 7)
add_test(NAME test_p0008 COMMAND leetcode_tests 8)
add_test(NAME test_p0009 COMMAND leetcode_tests 9)
add_test(NAME test_p0012 COMMAND leetcode_tests 12)
add_test(NAME test_p0013 COMMAND leetcode_tests 13)
add_test(NAME test_p0014 COMMAND leetcode_tests 14)
add_test(NAME test_p0017 COMMAND leetcode_tests 17)
add_test(NAME test_p0019 COMMAND leetcode_tests 19)
add_test(NAME test_p0020 COMMAND leetcode_tests 20)
add_test(NAME test_p0021 COMMAND leetcode_tests 21)
add_test(NAME test_p0026 COMMAND leetcode_tests 26)
add_test(NAME test_p0027 COMMAND leetcode_tests 27)
add_test(NAME test_p0033 COMMAND leetcode_tests 33)
add_test(NAME test_p0035 COMMAND leetcode_tests 35)
add_test(NAME test_p0067 COMMAND leetcode_tests 67)
add_test(NAME test_p0069 COMMAND leetcode_tests 69)
add_test(NAME test_p0083 COMMAND leetcode_tests 83)
add_test(NAME test_p0088 COMMAND leetcode_tests 88)
add_test(NAME test_p0125 COMMAND leetcode_tests 125)
add_test(NAME test_p0190 COMMAND leetcode_tests 190)
add_test(NAME test_p0530 COMMAND leetcode_tests 530)
add_test(NAME test_p0783 COMMAND leetcode_tests 783)
