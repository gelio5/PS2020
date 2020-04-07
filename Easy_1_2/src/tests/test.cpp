//
// Created by vlrez on 07.04.2020.
//
#include <gtest/gtest.h>
#include "../Sort.h"

TEST(Easy_1_1, lessTest)
{
    ASSERT_TRUE(less(1.0, 2.0));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}