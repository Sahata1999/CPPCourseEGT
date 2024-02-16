#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

//// Function to print the area using polymorphism
void printArea(const Shape* shape) {
    std::cout << "Area: " << shape->area() << std::endl;
}

int main() {
    // Creating objects
    Circle circle("black", 5.0);
    Rectangle rectangle("blue",4.0, 6.0);

    // Using polymorphic function to print area
    printArea(&circle);
    printArea(&rectangle);

    return 0;
}