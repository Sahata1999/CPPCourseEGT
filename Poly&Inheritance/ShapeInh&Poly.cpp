#include "Shape.h"
#include "Rectangle.h"

#include <iostream>

int main()
{
	Shape shape1;

	Rectangle rect1;

    shape1.setA(5);
    rect1.setA(10);

    Shape* shapePointer = &shape1;
    Shape* rectanglePointer = &rect1;

   
    shapePointer->print();    
    rectanglePointer->print(); 

    return 0;





   
}

