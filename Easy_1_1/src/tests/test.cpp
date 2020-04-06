#include <gtest/gtest.h>
#include "../Stack.h"

TEST(Easy_1_1, sizeStack)
{
    auto b = Stack();
    ASSERT_EQ(b.Size(), 20);
    auto a = Stack(30);
    ASSERT_EQ(a.Size(), 30);
}

TEST(Easy_1_1, pushTest)
{
    auto a = Stack(30);
    ASSERT_EQ(a.ContainedNumber(), 0);
    a.Push("abc");
    ASSERT_EQ(a.ContainedNumber(), 1);
}

TEST(Easy_1_1, pushExceptionTest)
{
    auto a = Stack();
    for (int i = 0; i < (a.Size() + 1); ++i){
        try {
            a.Push(std::string("agh"));
        }
        catch (std::length_error b){
            ASSERT_EQ(std::string(b.what()), std::string("Stack Overflow"));
        }
    }
}

TEST(Easy_1_1, popTest)
{
    auto a = Stack();
    a.Push("abc");
    ASSERT_EQ(a.ContainedNumber(), 1);
    a.Pop();
    ASSERT_EQ(a.ContainedNumber(), 0);
}

TEST(Easy_1_1, frontTest)
{
    auto a = Stack(30);
    ASSERT_EQ(a.ContainedNumber(), 0);
    a.Push("abc");
    ASSERT_EQ(a.ContainedNumber(), 1);
    ASSERT_EQ(std::string("abc"), *a.Front());
    a.Push("bdc");
    ASSERT_EQ(a.ContainedNumber(), 2);
    ASSERT_EQ(std::string("bdc"), *a.Front());
    a.Pop();
    ASSERT_EQ(a.ContainedNumber(), 1);
    ASSERT_EQ(std::string("abc"), *a.Front());
}
int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}