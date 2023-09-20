# CMake generated Testfile for 
# Source directory: /class/classes/jdele022/final-project-jja/UnitTesting
# Build directory: /class/classes/jdele022/final-project-jja/UnitTesting
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[AllTests]=] "/class/classes/jdele022/final-project-jja/bin/runAllTests")
set_tests_properties([=[AllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "/class/classes/jdele022/final-project-jja/UnitTesting/CMakeLists.txt;27;add_test;/class/classes/jdele022/final-project-jja/UnitTesting/CMakeLists.txt;0;")
subdirs("googletest")
