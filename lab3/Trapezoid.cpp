// Name: Kate Zetrouer
// Class: 1021
// Date: 9/21/2022
// Desc: This file is used to establish declare the functions and return values in the trapezoid class.
// Time: 10 min
#include <cmath>
#include "Trapezoid.h"

// establish setBase1 instructions
bool Trapezoid::setBase1(double b)
{
	// Validation loop
	if (base1 >= 0)
	{
		// Store value in member variable
		base1 = b;
		
		return true;
	}
	else
	{	
		
		return false;
	}
}

// Establish setBase2 instructions 
bool Trapezoid::setBase2(double s)
{
	// Validation loop
	if (base2 >= 0)
	{
		// store value as member variable
		base2 = s;
		
		return true;
	}
	else
	{
		return false;
	}
}

// Establish instruction for setHeight
bool Trapezoid::setHeight(double h)
{
	// Validation loop
	if (height >= 0)
	{
		// set value as member variable
		height = h;

		return true;
	}
	else
	{
		return false;
	}
}

// Getter functions
double Trapezoid::getBase1()
{
	return base1;
}

double Trapezoid::getBase2()
{
	return base2;
}

double Trapezoid::getHeight()
{
	return height;
}

// Calc Area function returns area of trapezoid
double Trapezoid::calcArea()
{
	return ((base1+base2)/2)*height;
}
