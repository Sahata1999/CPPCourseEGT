#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
	
		
	
	void setB(int b);
	int getB();

	virtual void print() override;

private:
	int b;

};

