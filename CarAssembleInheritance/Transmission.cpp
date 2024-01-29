#include "Transmission.h"

Transmission::Transmission(string name, int price, string transType, int gears) : Car(name, price) {
	setName(name);
	setPrice(price);
setTransType(transType);
setGears(gears);

}

void Transmission::setTransType(string transType) {
	this->transType = transType;
}


string Transmission::getTransType() {
	return this-> transType;
}
void Transmission::setGears(int gears) {
	this->gears = gears;
}
int Transmission::getGears() {
	return this->gears;
}

void Transmission::printTransmission(){
    cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Transmission Type: " << this->transType << endl;
	cout << "Number of Gears: " << this->gears << endl;
}