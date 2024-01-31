#pragma once
#include "TwoDimShape.h"
class Rectangle : public TwoDimShape

{
public:
	
	Rectangle(int x, int y);
	void setX(int);
	int getX();
	void setY(int);
	int getY();


	void print();
	void setArea();
	void getArea();
	
	
	bool operator>(const Rectangle& other) const;
	

	






private:
	int x;
	int y;
	int area;
};

