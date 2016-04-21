//
// Created by Chris on 21/04/2016.
//
#include "Shape.h"
#include <ostream>
#include <iostream>

void TestingShape()
{
    Shape s;//test default constructor
    Shape s2(3,4);//testing two arg constructor

    for(int i=0;i<10;i++)
    {
        s2.SetX(i,10);
        s2.SetY(i,12);
    }
    Shape s4 = s2;//testing copy constructor
    for(int i=0;i<10;i++)
    {
        std::cout<<s2.GetX(i);
        std::cout<<s2.GetY(i);
    }

    std::cout<< std::endl;
    for(int i=0;i<10;i++)
    {
        std::cout<<s4.GetX(i);
        std::cout<<s4.GetY(i);
    }
    Shape s3(2,2);
    Shape s5(2,2);
    for(int i=0;i<10;i++)
    {
        s3.SetX(i,20);
        s5.SetY(i,30);
    }
    Shape s6 = s3+s5;//testing + operator
    for(int i =0;i<10;i++)
    {
        std::cout<<s6.GetX(i)<<std::endl;
    }
    Shape s7(2,2);
    Shape s8(2,2);

    for(int i=0;i<10;i++) {
        s3.SetX(i, 30);
        s5.SetY(i, 40);
    }
    Shape s9 = s3-s5;

    for(int i =0;i<10;i++)
    {
        std::cout<<s9.GetX(i)<<std::endl;
    }
    Shape s10;
    s10 = s5;
    for(int i =0;i<10;i++)
    {
        std::cout<<s10.GetX(i)<<std::endl;
    }


}
