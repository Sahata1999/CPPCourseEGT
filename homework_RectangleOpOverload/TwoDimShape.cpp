#include "TwoDimShape.h"


TwoDimShape::TwoDimShape(int x, int y) : Shape(x)
{
	this->y = y;
}

void TwoDimShape::setY(int y) {
	this->y = y;
}
int TwoDimShape::getY() {
	return this->y;
}

void TwoDimShape::setArea() {
	
}
void TwoDimShape::getArea() {

}

void TwoDimShape::print() {
	cout << "X :" << x << endl;
	cout << "Y :" << y << endl;
}
