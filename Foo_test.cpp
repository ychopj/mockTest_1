#include "gtest/gtest.h"
#include"gmock/gmock.h"
#include"Foo.h"

TEST(Add, negative)
{
    EXPECT_EQ(Add(-1, -2), -3);
    EXPECT_GT(Add(-4, -5), -6);
}
TEST(Add, positive)
{
    EXPECT_EQ(Add(1, 2), 3);
    EXPECT_GT(Add(4, 5), 6);
}

TEST(FooTest, Fun)
{
    Foo f;
    EXPECT_EQ(3, f.Fun(1, 2));

}

