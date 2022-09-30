//Frank Yang
//CPSC1021
//9/21/22
//Define what the rectangle methods do
//20min
#include "Rectangle.h"

bool Rectangle::setWidth(double test){
	if (test >= 0){
		width = test;
		return true;
}
	else
		return false;
}

bool Rectangle::setLength(double test){
	if (test >= 0){
		length = test;
		return true;
	}
	else 
		return false;
}

double Rectangle::getLength(){
	return length;
}

double Rectangle::getWidth(){
	return width;
}	

double Rectangle::calcArea(){
	return length * width;
}
