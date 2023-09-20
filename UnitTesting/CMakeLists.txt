cmake_minimum_required(VERSION 3.20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)
enable_testing()

add_executable(runAllTests

  test.cpp 
)

add_executable(finalProject

    ../main.cpp
    ../classFiles/Archer.cpp
    ../classFiles/Characters.cpp
    ../classFiles/Warrior.cpp
    ../classFiles/Wizard.cpp
    ../classFiles/Enemy.cpp    
    ../classFiles/Companion.cpp
)

target_link_libraries(runAllTests gmock gtest gtest_main)
target_link_libraries(runAllTests simpleLibrary)

add_test(NAME AllTests COMMAND runAllTests)