/*Name: Jacob Colson
Class: 1021
Date: 9/21/2022
Desc: This file contains the prototypes for the Circle class, functions are in the cpp file
Time: 10 minutes */


#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Circle {

    private:
        double radius;
        double pI = 3.14149;
    
    public:
        bool setRadius(double r);
        double getRadius();
        double calcArea();


};

#endif 
