#include "Shape.h"

Shape::Shape(int x)
{
	this->x = x;
}

void Shape::setX(int) {
	this->x = x;
}
int Shape::getX() {
	return this->x;
}

void Shape::print() {
	cout << "X :" << x << endl;
}