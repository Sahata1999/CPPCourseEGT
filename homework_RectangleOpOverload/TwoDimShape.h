#pragma once
#include "Shape.h"
class TwoDimShape : public Shape

{
public:
	TwoDimShape(int x, int y);
	void setY(int);
	int getY();
	 
	virtual void print();
	virtual void setArea();
virtual	void getArea();


protected:
	
	int y;
	int area;
};

