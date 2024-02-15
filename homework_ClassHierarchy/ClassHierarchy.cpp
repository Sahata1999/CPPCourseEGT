#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    
    shape1->draw();
    shape2->draw();

    
    delete shape1;
    delete shape2;

    return 0;
}