#include "Circle.h"
#include <iostream>

Circle::Circle(string color, double radius) : Shape(color) {
	
	this->radius = radius;
}

void Circle::draw() {
	cout << "Drawing a circle with color " << color << endl;
}

double Circle::area() const {
	return 3.14 * radius * radius;
}