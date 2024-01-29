#include"Cars.h"

Cars::Cars(string brand, string model, int year, string color, string fuel, string transmission, string vin, string plate)
{
	setBrand(brand);
	setModel(model);
	setYear(year);
	setColor(color);
	setFuel(fuel);
	setTransmission(transmission);
	setVin(vin);
    setPlate(plate);



}

void Cars::print() {
cout <<	this->brand<<endl;
	cout <<this->model<<endl;
	cout<<this->year<<endl;
	cout << this->color << endl;
	cout << this->fuel << endl;
	cout << this->transmission << endl;
	cout << this->vin << endl;
	cout << this->plate << endl;
}

void Cars::setBrand(string brand) {
	this->brand = brand;
}

void Cars::setModel(string model) {
	this->model = model;
}

void Cars::setYear(int year) {
	this->year = year;
}

void Cars::setColor(string color) {
	this->color = color;
}

void Cars::setFuel(string fuel) {
	this->fuel = fuel;
}
void Cars::setTransmission(string transmission) {
	this->transmission = transmission;
}
void Cars::setVin(string vin) {
	this->vin = vin;
}
void Cars::setPlate(string plate) {
	this->plate = plate;
}

string Cars::getBrand() {
	return this->brand;
}
string Cars::getModel() {
	return this->model;
}

int Cars::getYear() {
	return this->year;
}
string Cars::getColor() {
	return this -> color;
}

string Cars::getFuel() {
	return this->fuel;
}
string Cars::getTransmission() {
	return this->transmission;
}
string Cars::getVin() {
	return this->vin;
}
string Cars::getPlate() {
	return this->plate;
}
