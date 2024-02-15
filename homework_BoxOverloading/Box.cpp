#include "Box.h"

Box::Box(int length,int width,int height)
{
	this->length = length;
	this->width = width;
	this->height = height;
}

void Box::setLength(int length)
{
	this->length = length;
}	
int Box::getLength()
{
	return this-> length;
}

void Box::setWidth(int width)
{
	this->width = width;
}
int Box::getWidth()
{
	return this->width;
}

void Box::setHeight(int height)
{
	this->height = height;
}
int Box::getHeight()
{
	return this->height;
}

bool Box::operator+(const Box& other) const {
	return (length + width + height) + (other.length + other.width + other.height);
}

//bool Box::operator==(const Box& other) const{
	//return (length + width + height) == (other.length + other.width + other.height);}
bool Box::operator =(const Box& other) {
	return (width = other.width) && (length = other.length) && (height = other.height);
}