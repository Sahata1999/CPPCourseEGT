#include "Circle.h"

#include "Circle.h"
#include <iostream>

Circle::Circle(double radius) : radius(radius) {}

void Circle::draw() {
    std::cout << "Circle's radius is : " << radius << std::endl;
}
