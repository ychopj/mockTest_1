//
// Created by c on 2022/11/7.
//

#ifndef MOCKTEST_1_RECTANGLE_H
#define MOCKTEST_1_RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
private:
    double width, heigth;
public:
    //构造函数
    Rectangle(double w, double h)
    {
        width = w;
        heigth = h;
    }
    //析构函数
    ~Rectangle(){}
    //计算矩形面积
    double Area() override
    {
        return width * heigth;
    }
};


#endif //MOCKTEST_1_RECTANGLE_H
