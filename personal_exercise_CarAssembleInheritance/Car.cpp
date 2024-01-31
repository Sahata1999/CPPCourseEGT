#include "Car.h"

Car::Car(string name, int price) {
	setName(name);
setPrice(price);

}

void Car::setName(string name) {
	this->name = name;
}
string Car::getName() {
	return this-> name;
}

void Car::setPrice(int price) {
	this->price = price;
}
int Car::getPrice() {
	return this->price;
}

void Car::printCar() {
	cout << "Name: " << this->name << endl;
    cout << "Price: " << this->price << endl;
}
