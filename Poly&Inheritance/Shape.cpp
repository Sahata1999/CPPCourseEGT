#include "Shape.h"



void Shape::setA(int a)
{
	this->a = a;
}

int Shape::getA()
{
	return this-> a;
}
void Shape::print()
{
	std::cout << "Shape: A is " << a << std::endl;
}