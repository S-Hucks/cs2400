/*
 *        File: rectangle_main.cc
 *      Author: Nasseef Abukamail
 *        Date: April 15, 2019
 * Description: Rectangle class.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "rectangle.h"

using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    Rectangle r(5, 4);

    r.output();
    r.setLength(50);
    r.setWidth(40);
    r.output();
    cout << "Length " << r.getLength() << endl;
    int x = 9, y = 9;
    if (x == y)
    {
        cout << "yes" << endl;
    }

    Rectangle r1, r2;
    r1.setLength(9);
    if (r1 == r2)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
    cout << "Rectangle is " << r1 << endl;
    return 0;
}// main

