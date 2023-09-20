# For the unit tests:

# cmake_minimum_required(VERSION 3.2)
# project(final-project-tests)

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# include_directories(${CMAKE_SOURCE_DIR}/include)
# link_directories(${LIBRARY_OUTPUT_PATH})

# include_directories(
#   ${CMAKE_SOURCE_DIR}/googletest/include/
#   ${CMAKE_SOURCE_DIR}/googlemock/include/
# )

# add_subdirectory(UnitTesting)
# add_subdirectory(classFiles)

# For the Gcov/Lcov:

cmake_minimum_required(VERSION 3.15)
project(gtest_coverage)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS --coverage)

# Reference: https://github.com/google/googletest/tree/main/googletest#incorporating-into-an-existing-cmake-project
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif ()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif ()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif ()

set(SOURCE_FILES classFiles/Archer.cpp classFiles/Characters.cpp classFiles/Companion.cpp classFiles/Enemy.cpp classFiles/Warrior.cpp classFiles/Wizard.cpp)
add_executable(main main.cpp ${SOURCE_FILES})

set(TEST_FILES UnitTesting/test.cpp)
add_executable(test ${TEST_FILES} ${SOURCE_FILES})

target_link_libraries(test gtest gtest_main)