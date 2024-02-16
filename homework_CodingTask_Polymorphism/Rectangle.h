#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(string color, double width, double height);
	void draw();
	double area() const override;
private:
	double width;
	double height;
};
