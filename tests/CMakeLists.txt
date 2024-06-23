# tests/CMakeLists.txt
add_executable(runTests test_tic_tac_toe.cpp)
target_link_libraries(runTests gtest gtest_main)
add_test(NAME runTests COMMAND runTests)
