#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Rectangle {
public:
    //constructors
    Rectangle(); //0, 0
    Rectangle(double newLength, double newWidth); //validate the parameters

    //getters
    double getLength();
    double getWidth();

    //setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    //helper
    void output();
    double area();




private:
    double length;
    double width;
};
#endif