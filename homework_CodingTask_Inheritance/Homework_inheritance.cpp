#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{
	Circle c("red"); // we create a circle object with color red
	Rectangle r("green"); // we create a rectangle object with color green
	Shape s("black"); // we create a shape object with color black
	
	s.draw(); // with shape object we call the draw function of shape class
	c.draw(); // with circle object we call the draw function of circle class
	r.draw(); // with rectangle object we call the draw function of rectangle class

	return 0;
}