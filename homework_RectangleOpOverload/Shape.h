#pragma once
#include <string>
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int);

		
		
		virtual void print();
	void setX(int);
	int getX();




protected:

	int x;
};

