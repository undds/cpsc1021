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
	bool valid;
	double output;

	do{
	cout << "1 - Circle\n2 - Square\n3 - Rectangle\n4 - Trapezoid\n";
	cin >>  in; 



	}while(in < 0 || in > 5);

if (in == 1){
	Circle cir1;
	double rad,
		r;
	do {
		cout << "Radius: ";
		cin >> rad;
		r = cir1.getRadius(rad);
} while (cir1.setRadius(r) == false);
	if (cir1.setRadius(r) == true){
		output = cir1.calcArea();
		
		cout << setprecision(1) << fixed << "Area: " << output << endl;
}


}


else if (in == 2){
	Square square1;
	double side,
	       s;
	do{
		cout << "Side: ";
		cin >> side;
		s = square1.getSide(side);
	}while (square1.setSide(s) == false);
	
	if (square1.setSide(s) == true){
		output = square1.calcArea();

		cout << setprecision(1) << fixed << "Area: " << output << endl;
	}

}

else if (in == 3){
	Rectangle rect1;
	double l,
	       w,
	       length,
	       width;
	do{
	cout << "Length: ";
	cin >> length;
	l = rect1.getLength(length);
	} while (rect1.setLength(l) == false);

	do{
	cout << "Width: ";
	cin >> width;
	w = rect1.getWidth(width);
	}while (rect1.setWidth(w) == false);
	if(rect1.setWidth(w) == true && rect1.setLength(l) == true){
		output = rect1.calcArea();
		cout << setprecision(1) << fixed << "Area: " << output << endl;
	}
}
else{
	//trapezoid stuff
}


return 0;
}
