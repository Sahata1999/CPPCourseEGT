#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(string color, double width, double height) : Shape(color) {
	
	this->width = width;
	this->height = height;
}

void Rectangle::draw() {

	cout << "Drawing a rectangle with color " << color << endl;
}

double Rectangle::area() const {
	return width * height;
}