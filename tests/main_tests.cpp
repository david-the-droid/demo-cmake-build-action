#include "MathLib.h"
#include "MathSqrtLib.h"
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

namespace
{
class TestMathLib : public ::testing::Test
{
    void SetUp() override
    {
    }
};
} // namespace

TEST_F(TestMathLib, AddNumbers_adds4And5ToGive9_whenCalled)
{
    ASSERT_EQ(AddNumbers(4, 5), 9);
}