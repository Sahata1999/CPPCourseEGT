#pragma once
#include <string>
using namespace std;
class Shape // Base class
{
public:
	Shape(string color); // Constructor
	virtual ~ Shape() {}; // Destructor
	void draw(); // Method
	virtual double area() const = 0; // Method



protected:
	string color; // Attribute
};
