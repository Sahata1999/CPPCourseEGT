#include "Car.h"


Car::Car(string name, int price, Engine &engine) : engine(engine)
{
	setName(name);
	setPrice(price);
	
}

void Car::printCar() {
	cout << "Name " << this->name << "price " << this->price << "Engine ";  this->engine.printEngine();
}

void Car::setName(string name) {
	this->name = name;
}
string Car::getName() {
	return this->name;
}
void Car::setPrice(int price) {
	this->price = price;
}
int Car::getPrice() {
	return this->price;
}
