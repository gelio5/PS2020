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

TEST(Easy_1_2, sortTest_1)
{
    int sortableArray[] = {5, 4, 7, 2, 11};
    int sortedArray[] = {2, 4, 5, 7, 11};
    int n = sizeof(sortableArray) / sizeof(sortableArray[0]);
    treeSort(sortableArray, n);
    for (int i = 0; i < n; i++)
        ASSERT_EQ(sortableArray[i], sortedArray[i]);
}

TEST(Easy_1_2, sortTest_2)
{
    int sortableArray[] = {-4, 56, 365756, -900000, 34, 0, 0, 23};
    int sortedArray[] = {-900000, -4, 0, 0, 23, 34, 56, 365756};
    int n = sizeof(sortableArray) / sizeof(sortableArray[0]);
    treeSort(sortableArray, n);
    for (int i = 0; i < n; i++)
        ASSERT_EQ(sortableArray[i], sortedArray[i]);
}

TEST(Easy_1_2, sortTest_3)
{
    int sortableArray[] = {-56, 34, 2, 12, -500};
    int sortedArray[] = {-500, -56, 2, 12, 34};
    int n = sizeof(sortableArray) / sizeof(sortableArray[0]);
    treeSort(sortableArray, n);
    for (int i = 0; i < n; i++)
        ASSERT_EQ(sortableArray[i], sortedArray[i]);
}

TEST(Easy_1_2, sortTest_4)
{
    int sortableArray[] = {-20, -35, -15, -300};
    int sortedArray[] = {-300, -35, -20, -15};
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