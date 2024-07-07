#include <iostream>
#include <gtest/gtest.h>

int add(int a, int b)
{
    return a+b;
}

TEST(test1, testValue)
{
    ASSERT_EQ(add(1, 3), 4);
    EXPECT_EQ(add(1, 2), 3) << "ERROR" << std::endl;
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}