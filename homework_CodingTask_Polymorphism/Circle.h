#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(string color , double radius);
	void draw();
	double area() const override;

private:
	double radius;
};
