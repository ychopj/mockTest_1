//
// Created by c on 2022/11/7.
//

#ifndef MOCKTEST_1_SHAPE_H
#define MOCKTEST_1_SHAPE_H
class Shape
{
public:
    virtual double Area(void) = 0;
};
double GetPrice(class Shape &s)
{
    return s.Area() * 2;
}

#endif //MOCKTEST_1_SHAPE_H
