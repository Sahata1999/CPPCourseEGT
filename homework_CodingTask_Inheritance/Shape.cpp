#include "Shape.h"
#include <iostream>

Shape::Shape(string color) // Constructor defining
{
	this->color = color; 
}

void Shape::draw() // Function defining
{
	cout << "Drawing a shape with color " << color << endl;
}