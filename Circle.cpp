//
// Created by Jess Zheng on 2019-01-26.
//

#include "Circle.h"
Circle:: ~Circle(){}
Circle:: Circle(double r) {this->r=r;}

const double Circle::calcRadius() const {
    return this->r;
};
const double Circle::calcArea() const {
    return this->pi*r*r;
};
const double Circle::calcPerimeter() const {
    return this->pi*2*r;
};

