find_package(GTest REQUIRED)

add_executable (Test main_tests.cpp)

target_link_libraries(Test PUBLIC MathLib MathSqrtLib GTest::GTest)