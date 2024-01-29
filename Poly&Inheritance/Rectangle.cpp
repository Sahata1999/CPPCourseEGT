#include "Rectangle.h"




void Rectangle::setB(int b)
{
	this->b = b;
}

int Rectangle::getB()
{
	return this->b;
}

void Rectangle::print()
{
	cout << "Rectangle: " << "A is: " << a << endl << "B is:" << b;
}