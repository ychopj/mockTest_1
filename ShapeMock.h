//
// Created by c on 2022/11/7.
//

#ifndef MOCKTEST_1_SHAPEMOCK_H
#define MOCKTEST_1_SHAPEMOCK_H
#include"Shape.h"
#include"gmock/gmock.h"
#include"gtest/gtest.h"
class ShapeMock: public Shape
{
public:
    MOCK_METHOD0(Area, double());
};

TEST(ShapeTest, Rectangle)
{
    ShapeMock rect;

    EXPECT_CALL(rect, Area()).WillRepeatedly(testing::Return(13));
    EXPECT_EQ(26,  GetPrice(rect));
}
TEST(ShapeTest, Rect)
{
    ShapeMock rect;
    EXPECT_CALL(rect, Area())
    .WillOnce(testing::Return(1))
    .WillOnce(testing::Return(2))
    .WillOnce(testing::Return(3));
    EXPECT_EQ(2, GetPrice(rect));
    EXPECT_EQ(4, GetPrice(rect));
    EXPECT_EQ(6, GetPrice(rect));

}


#endif //MOCKTEST_1_SHAPEMOCK_H
