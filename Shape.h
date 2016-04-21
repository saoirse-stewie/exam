//
// Created by Chris on 21/04/2016.
//

#ifndef EXAM_SHAPE_H
#define EXAM_SHAPE_H

class Shape{
public:
    Shape();
    Shape(int a , int b);
    Shape(const Shape &ax);
    ~Shape();
    double GetX(int)const ;
    double GetY(int a)const;
    const Shape operator+(const Shape &n) const;
    const Shape operator-(const Shape &n) const;
    Shape& operator=(const Shape &aa);
    //double GetY();
    void SetX(int,int);
    void SetY(int,int);





private:
    double *x;
    double *y;
    double a;
    double b;



};



#endif //EXAM_SHAPE_H
