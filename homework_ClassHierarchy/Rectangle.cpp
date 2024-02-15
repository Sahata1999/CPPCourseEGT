#include "Rectangle.h"

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

void Rectangle::draw() {
    std::cout << "Rect's width is: " << width << " Rect's height is: " << height << std::endl;
}