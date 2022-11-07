//
// Created by c on 2022/11/3.
//
#include<iostream>
#include"Foo.h"
#include"gmock/gmock.h"
#include"gtest/gtest.h"


#include"ShapeMock.h"


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    //Rectangle rect(3,4);
    //std::cout << GetPrice(rect) << std::endl;
    //return 0;

}

