#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle()  {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){
    if (newLength > 0 && newWidth > 0)
    {
        length = newLength;
        width = newWidth;
    }
    else {
        length = 0;
        width = 0;
    }

}
//setters
void Rectangle::setLength(double newLength) {
    if (newLength > 0)
    {
        length = newLength;
    }

}
void Rectangle::setWidth(double newWidth) {
    if (newWidth > 0)
    {
        width = newWidth;
    }

}

//getters
double Rectangle::getLength(){
    return length;
}
double Rectangle::getWidth(){
    return width;
}

//helper functions

void Rectangle::output() {
    cout << "(" << length << "x" << width << ")" << endl;
}
double Rectangle::area(){
    return length * width;
}

bool operator ==(Rectangle r1, Rectangle r2){
    if (r1.length == r2.length &&
        r1.width == r2.width)
    {
       return true;
    }
    return false;
}

ostream & operator <<(ostream &outs, const Rectangle &r){
    outs << "(" << r.length << "x" << r.width << ")" << endl;
    return outs;
}
