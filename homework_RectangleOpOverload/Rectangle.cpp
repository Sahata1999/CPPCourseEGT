#include "Rectangle.h"

Rectangle::Rectangle(int x, int y): TwoDimShape(x, y){
	setX(x);
	setY(y);

}



void Rectangle::setX(int x) {
this->x = x;
}
int Rectangle::getX() {
	return this->x;
}
void Rectangle::setY(int y) {
	this->y = y;
}
int Rectangle::getY() {
	return this->y;
}

void Rectangle::setArea() {
	this->area = x * y;
}
void Rectangle::getArea() {
	cout << "Area of the Rectangle is :" <<this-> area << endl;
}


void Rectangle::print() {
	cout << "X :" <<this->x << endl;
	cout << "Y :" <<this-> y << endl;
	cout << "Area :" << this->area << endl;
}



bool Rectangle::operator>(const Rectangle& other) const {
	return (x * y) > (other.x * other.y);
}
 