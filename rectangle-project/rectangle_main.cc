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

    return 0;
}// main

