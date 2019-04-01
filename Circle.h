//
// Created by Jess Zheng on 2019-01-26.
//

#ifndef UNTITLED2_CIRCLE_H
#define UNTITLED2_CIRCLE_H



class Circle {


public:
//    double calcRadius ();
//    double calcArea ();
//    double calcPerimeter ();
    const double calcRadius() const;
    // const变量（第一个const），意为该变量不可被修改。
    // const 函数（把const加在函数后边）意为该函数不对成员函数做任何修改
    const double calcArea () const;
    const double calcPerimeter () const;
    const double pi = 3.1415926;
    ~Circle();
    Circle(double r);
    double x;
    double y;
    double r;

};


#endif //UNTITLED2_CIRCLE_H
