//
// Created by c on 2022/11/7.
//
#include"demo.h"
#include"gmock/gmock.h"
class MockParent:public Parent
{
public:
    MOCK_CONST_METHOD0(getNum, int());
    MOCK_METHOD1(setResult, void(int));
    MOCK_METHOD1(print, void(const string &));
    MOCK_METHOD2(calc, int(int, double));
};

using testing::Return;
using testing::_;

TEST(dmeo, 1)
{
    MockParent p;
    Target t(&p);
    EXPECT_CALL(p, getNum())
    .Times(2)
    .WillOnce(Return(2))
    .WillOnce(Return(10));

    EXPECT_CALL(p, setResult(2))
    .Times(1);

    EXPECT_CALL(p, print(_))
    .Times(2);

    EXPECT_EQ(t.doThis(), 10);
}

TEST(demo, 2)
{
    MockParent p;
    Target t(&p);

    EXPECT_CALL(p, calc(1, 2.2))
    .Times(1)
    .WillOnce(Return(3));
    EXPECT_EQ(t.doThat(), 3);
}