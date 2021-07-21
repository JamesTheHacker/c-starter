include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

set(TEST_SOURCES test_hello.c)

add_executable(test_hello ${TEST_SOURCES})
target_link_libraries(test_hello hello ${CHECK_LIBRARIES})
