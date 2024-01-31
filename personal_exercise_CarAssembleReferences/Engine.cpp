#include "Engine.h"



Engine::Engine(string volume, string hp, string torque, string fuelType)
{
	setVolume(volume);
	setHp(hp);
	setTorque(torque);
	setFuelType(fuelType);
	
}


void Engine::setVolume(string volume)
{
	this->volume = volume;
}

string Engine::getVolume()
{
	return this-> volume;
}

void Engine::setHp(string hp)
{
	this->hp = hp;
}
string Engine::getHp()
{
	return this->hp;
}
void Engine::setTorque(string torque)
{
	this->torque = torque;
}
string Engine::getTorque()
{
	return this->torque;
}
void Engine::setFuelType(string fuelType)
{
	this->fuelType = fuelType;
}
string Engine::getFuelType()
{
	return this->fuelType;
}

void Engine::printEngine()
{
	cout << "Engine specs : " << endl;
	cout << "Volume: " << this->volume << endl;
	cout << "Hp: " << this->hp << endl;
	cout << "Torque: " << this->torque << endl;
	cout << "Fuel Type: " << this->fuelType << endl;
}