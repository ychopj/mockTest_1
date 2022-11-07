//
// Created by c on 2022/11/7.
//
#include "Turtle.h"
#include"gmock/gmock.h"
#include "Painter.h"

using testing::AtLeast;
using testing::Return;
class MockTurtle : public Turtle{
public:
    MOCK_METHOD0(PenUp, void());
    MOCK_METHOD0(PenDown, void());
    MOCK_METHOD1(Forward, void(int distance));
    MOCK_METHOD1(Turn, void(int degress));
    MOCK_METHOD2(GoTo, void(int x, int y));
    MOCK_METHOD0(GetX, int());
    MOCK_METHOD0(GetY, int());
};
TEST(PainterTest, CanDrawSomething)
{
    MockTurtle turtle;
    EXPECT_CALL(turtle, PenDown())
    .Times(AtLeast(1));

    Painter painter(&turtle);
    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));

    EXPECT_CALL(turtle, GetX())
    .WillOnce(Return(10));
    EXPECT_CALL(turtle, GetY())
    .WillOnce(Return(20));

    EXPECT_EQ(30, painter.DrawXandY());


}