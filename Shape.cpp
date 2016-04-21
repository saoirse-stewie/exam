//
// Created by Chris on 21/04/2016.
//
#include "Shape.h"
#include <iostream>

Shape::Shape()
{
    std::cout << "in the default constructor" <<std::endl;
    x = nullptr;
    y = nullptr;
    a=0;
    b=0;
}
Shape::Shape(int a, int b)
{
    std::cout << "in the two arg constructor" <<std::endl;
    x = new double[10];
    y = new double[10];

    for(int i=0;i<10;i++)
    {
        x[a] = 0;
        y[b] = 0;
    }
}
Shape::Shape(const Shape &ax)
{
    std::cout << "in the copy constructor" <<std::endl;
    x = new double[10];
    y = new double[10];

    if (x!=nullptr&&y!=nullptr)
    {
        for(int i =0;i<10;i++)
        {
            x[i] = ax.GetX(i);
            y[i] = ax.GetY(i);

        }
    }
}
Shape::~Shape()
{
    std::cout << "in the destructor" <<std::endl;
    if(x!=nullptr && y!=nullptr)
    {
        delete[] x;
        delete[] y;
    }

}

double Shape::GetX(int a) const {
    return x[a];

}
double Shape::GetY(int a) const{
    return y[a];

}
void Shape::SetX(int a, int val) {
    x[a] = val;
}

void Shape::SetY(int a, int val) {
        y[a] = val;

}
const Shape Shape:: operator+(const Shape &n)const
{
    Shape result(*this);
    std::cout << "+ operator" <<std::endl;
    for(int i =0;i<10;i++)
    {
        double m = result.GetX(i);
        double b = n.GetY(i);
        result.SetX(i,m+b);
    }
    return result;
}
const Shape Shape:: operator- (const Shape &mx)const
{
    std::cout << "- operator" <<std::endl;
    Shape result(*this);
    std::cout << "- operator" << std::endl;
    for(int i=0;i<10;i++)
    {
        double m = result.GetX(i);
        double b = mx.GetY(i);
        result.SetX(i,m-b);
    }
    return result;

}
Shape& Shape::operator =(const Shape &aa)
{
    std::cout << "= operator" <<std::endl;
    if(this!=nullptr)
    {
        delete[]x;
        delete[]y;
    }
    x = new double[10];
    y = new double[10];

    for(int i =0;i<10;i++)
    {
        x[i] = aa.GetX(i);
        //y[i] = aa.GetY(i);
    }
    return *this;

}
