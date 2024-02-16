#include "Circle.h"
#include <iostream>

Circle::Circle(string color) : Shape(color) {
	this->color = color;
}

void Circle::draw() {
	cout << "Drawing a circle with color " << color << endl;
}