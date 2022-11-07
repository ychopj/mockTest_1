//
// Created by c on 2022/11/7.
//

#ifndef MOCKTEST_1_TURTLE_H
#define MOCKTEST_1_TURTLE_H
class Turtle
{
public:
    //控制Turtle运动是否留下痕迹
    virtual void PenUp() = 0;
    virtual void PenDown() = 0;
    //控制turtle运动方向
    virtual void Forward(int distance) = 0;
    virtual void Turn(int degress) = 0;
    virtual void GoTo(int x, int y) = 0;
    //获取Turtle当前位置
    virtual int GetX() = 0;
    virtual int GetY() = 0;
public:
    virtual ~Turtle() {}
};


#endif //MOCKTEST_1_TURTLE_H
