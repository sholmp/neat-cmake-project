
add_executable(unit_tests tests.cpp)
find_package(GTest CONFIG REQUIRED)
#target_link_libraries(unit_tests pthread gtest_main)
target_link_libraries(unit_tests PUBLIC GTest::gtest_main tt_config_db)
add_test(UnitTests unit_tests)
