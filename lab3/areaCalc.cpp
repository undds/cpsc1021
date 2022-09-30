//Frank Yang
//CPSC 1021
//9/21/22
//Calculates the area of inputted shapes by using objects
//2hr


#include <iostream>
#include "Square.h"
#include <iomanip>
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezoid.h"

using namespace std;

int main(){
	int in = 0;
	double output;
	bool valid;
//validate user input
	do{
	cout << "1 - Circle\n2 - Square\n3 - Rectangle\n4 - Trapezoid\n";
	cin >>  in; 



	}while(in < 0 || in > 5);

if (in == 1){
//create object and intiialize relevant variables
	Circle cir1;
	double rad;

	
//validate user input
	do {
		cout << "Radius: ";
		cin >> rad;
		cir1.getRadius();
		valid = cir1.setRadius(rad);
} while (valid == false);

//calculate area
	if (cir1.setRadius(rad) == true){
		output = cir1.calcArea();
		cout << setprecision(1) << fixed << "Area: " << output << endl;
}
}


else if (in == 2){
	Square square1;
	double side; 
	do{
		cout << "Side: ";
		cin >> side;
		square1.getSide();
		valid = square1.setSide(side);
}while (valid == false);
	
	if (square1.setSide(side) == true){
		output = square1.calcArea();

		cout << setprecision(1) << fixed << "Area: " << output << endl;
	}

}

else if (in == 3){
	Rectangle rect1;
	double length,
	       width;
	do{
	cout << "Length: ";
	cin >> length;
	rect1.getLength();
	valid = rect1.setLength(length);
	} while (valid == false);

	do{
	cout << "Width: ";
	cin >> width;
	rect1.getWidth();
	valid = rect1.setWidth(width);
	}while (valid == false);

	output = rect1.calcArea();
	cout << setprecision(1) << fixed << "Area: " << output << endl;
}
else{
	Trapezoid trap1;
	double	base1,
		base2,
		height;
	
	do{
	cout << "Base1: ";
	cin >> base1;

	trap1.getBase1();
	valid = trap1.setBase1(base1);
}while (valid == false);

	do{
	cout << "Base2: ";
	cin >> base2;

	trap1.getBase2();
	valid = trap1.setBase2(base2);
}while(valid == false);


	do{
	cout << "Height: ";
	cin >> height;

	trap1.getHeight();
	valid = trap1.setHeight(height);
}while(valid == false);

//	cout << h << endl << height << endl <<  b2 << endl << base2 << endl << b1 << endl << b2;

	output = trap1.calcArea();

	cout << fixed << setprecision(1) << "Area: " << output << endl;

}
return 0;
}
