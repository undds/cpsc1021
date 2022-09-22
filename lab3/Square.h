//Frank Yang
//CPSC 1021
//9/21/22
//declare square class and its functions
//5 min






#ifndef SQUARE_H
#define SQAURE_H
class Square {
	//declare private members
	private:
		double side;
		double test;
	//declare public members
	public:	
		bool setSide(double);
		double calcArea();
		double getSide(double);
};

#endif
