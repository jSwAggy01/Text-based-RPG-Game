cmake_minimum_required(VERSION 3.15)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           main
  SOURCE_DIR        "/class/classes/jdele022/final-project-jja/googletest-src"
  BINARY_DIR        "/class/classes/jdele022/final-project-jja/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
