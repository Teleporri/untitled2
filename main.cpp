#include <iostream>
#include "Circle.h"
using namespace std;
const double pi = 3.1415926;

int main () {
    double r;
    cout<<"input a radius";
    cin>> r;
    Circle* myCircle = new Circle (r);
    cout<<myCircle->calcRadius()<<endl;
    cout<<myCircle->calcArea()<<endl;
    cout<<myCircle->calcPerimeter()<<endl;
    delete myCircle;
    return 0;
}
//double calcArea (float r)
//{
//    float s;
//    s= pi*r*r;
//
//    return s;
//}
//
//double calcPerimeter (float r)
//{
//    float p;
//    p= pi*2*r;
//
//    return p;
//}
//
//int main() {
//    float r;
//    cin >>r;
//    cout<< calcArea (r)<<endl;
//    cout<< calcPerimeter (r)<<endl;

//    float s;
//    s = pi*r*r;
//    cout << s <<endl;
//    float p;
//    p = pi*2*r;
//    cin >> r;
//    cout << p <<endl;
