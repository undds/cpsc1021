//Frank Yang
// CPSC 1021
//9/21/22
//Define what the methods do
//10min


#include "Square.h"

bool Square::setSide(double test){
	if (test >= 0){
	side = test;
	return true;
}
	else
		return false;
}

double Square::calcArea(){
	return side * side;

}

double Square::getSide(double test){
		return test;
}
