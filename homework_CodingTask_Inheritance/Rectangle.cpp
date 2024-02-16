#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(string color) : Shape(color) {

}

void Rectangle::draw() {

cout << "Drawing a rectangle with color " << color << endl;
}