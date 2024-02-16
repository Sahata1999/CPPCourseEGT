#pragma once
#include <string>
using namespace std;
class Shape // Base class
{
public:
	Shape(string color); // Constructor
	void draw(); // Method


protected:
	string color; // Attribute
};

