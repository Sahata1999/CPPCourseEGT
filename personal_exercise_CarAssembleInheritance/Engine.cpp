#include "Engine.h"
#include "Car.h"

Engine::Engine(string name, int price,string volume, string power, string torque, string fuelType) : Car(name , price) {
setVolume(volume);
setPower(power);
setTorque(torque);
setFuelType(fuelType);




}

void Engine::setVolume(string volume) {
	this->volume = volume;
}
string Engine::getVolume() {
	return this-> volume;
}

void Engine::setPower(string power) {
	this->power = power;
}
string Engine::getPower() {
	return this->power;
}

void Engine::setTorque(string torque) {
	this->torque = torque;
}
string Engine::getTorque() {
	return this->torque;
}

void Engine::setFuelType(string fuelType) {
	this->fuelType = fuelType;
}
string Engine::getFuelType() {
	return this->fuelType;
}

void Engine::printEngine() {
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Engine specs: " << endl;
	cout << "Volume: " << volume << endl;
	cout << "Power: " << power << endl;
	cout << "Torque: " << torque << endl;
	cout << "Fuel type: " << fuelType << endl;
}