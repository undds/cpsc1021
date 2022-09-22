#include "Circle.h"

bool Circle::setRadius(double r) {
    if (r > 0) {

        radius = r;
        return true;

    }
    else {

        return false;

    }
}

double Circle::getRadius() {

    return radius;

}

double Circle::calcArea() {

    return pI * pow(radius, 2);

}