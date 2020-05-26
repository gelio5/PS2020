//
// Created by vlrez on 07.04.2020.
//
#include <gtest/gtest.h>
#include "../Sort.h"
#include <cmath>

TEST(Easy_1_2, lessDoubleTest)
{
    double a = 1;
    double b = 2;
    ASSERT_TRUE(less(a, b));
    ASSERT_FALSE(less(a,a));
    ASSERT_FALSE(less(b,a));
}

TEST(Easy_1_2, lessFloatTest)
{
    float a = 1;
    float b = 2;
    ASSERT_TRUE(less(a, b));
    ASSERT_FALSE(less(a,a));
    ASSERT_FALSE(less(b,a));
}

TEST(Easy_1_2, lessIntegerTest)
{
    int a = 1;
    int b = 2;
    ASSERT_TRUE(less(a, b));
    ASSERT_FALSE(less(a, a));
    ASSERT_FALSE(less(b, a));
}

TEST(Easy_1_2, lessInteger8_tTest)
{
    int8_t a = 1;
    int8_t b = 2;
    ASSERT_TRUE(less(a, b));
    ASSERT_FALSE(less(a, a));
    ASSERT_FALSE(less(b, a));
}

TEST(Easy_1_2, greaterDoubleTest)
{
    double a = 1;
    double b = 2;
    ASSERT_TRUE(greater(b, a));
    ASSERT_FALSE(greater(a, a));
    ASSERT_FALSE(greater(a, b));
}

TEST(Easy_1_2, greaterFloatTest)
{
    float a = 1;
    float b = 2;
    ASSERT_TRUE(greater(b, a));
    ASSERT_FALSE(greater(a, a));
    ASSERT_FALSE(greater(a, b));
}

TEST(Easy_1_2, greaterIntegerTest)
{
    int a = 1;
    int b = 2;
    ASSERT_TRUE(greater(b, a));
    ASSERT_FALSE(greater(a, a));
    ASSERT_FALSE(greater(a, b));
}

TEST(Easy_1_2, greaterInteger8_tTest)
{
    int8_t a = 1;
    int8_t b = 2;
    ASSERT_TRUE(greater(b, a));
    ASSERT_FALSE(greater(a, a));
    ASSERT_FALSE(greater(a, b));
}

TEST(Easy_1_2, sortTest)
{
    int sortableArray[] = {5, 4, 7, 2 , 11};
    int sortedArray[] = {2, 4, 5, 7, 11};
    int n = sizeof(sortableArray) / sizeof(sortableArray[0]);
    treeSort(sortableArray, n);
    for (int i = 0; i < n; i++)
        ASSERT_EQ(sortableArray[i], sortedArray[i]);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}