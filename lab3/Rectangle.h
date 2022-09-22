//Frank Yang
//CPSC 1021
//9/21/22
//Define the attributes and methods of the class Rectangle
//5min
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
	private:
		double length;
		double width;
		double test;

	public:
		bool setLength(double);
		bool setWidth(double);
		double getLength(double);
		double getWidth(double);
		double calcArea();
};

#endif
