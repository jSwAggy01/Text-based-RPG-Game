cmake_minimum_required(VERSION 3.2)

add_library(simpleLibrary
  Archer.cpp
  Characters.cpp
  Warrior.cpp
  Wizard.cpp
  Companion.cpp
  Enemy.cpp
  ../main.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})