// Name: Kate Zetrouer
// Class: 1021
// Date: 9/21/2022
// Desc: This is the .h file for the shape Trapezoid and its purpose is to hold the class and designate what should be private and what should be public.
// Time:5 mins
#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

//Declare class
class Trapezoid
{
	// Declare private members
	private:
		double base1;
		double base2;
		double height;
	// Declare public members
	public:
		bool setBase1(double);
		bool setBase2(double);
		bool setHeight(double);
		double getBase1();
		double getBase2();
		double getHeight();
		double calcArea();
	};
#endif
