//
// Created by c on 2022/11/7.
//

#ifndef MOCKTEST_1_PAINTER_H
#define MOCKTEST_1_PAINTER_H
#include"Turtle.h"
class Painter
{
    Turtle* turtle;
public:
    Painter(Turtle* turtle):turtle(turtle){};
    bool DrawCircle(int, int, int){
        turtle->PenDown();
        return true;
    }

    int DrawXandY()
    {
        int x = turtle->GetX();
        int y = turtle->GetY();
        return  x + y;
    }
};


#endif //MOCKTEST_1_PAINTER_H
