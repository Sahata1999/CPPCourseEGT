#pragma once
#include <iostream>
#include <string>
using namespace std;



class Engine
{
public:
	Engine(string volume, string hp, string torque, string fuelType);

	void setVolume(string volume);
	string getVolume();
	void setHp(string hp);
	string getHp();
	void setTorque(string torque);
	string getTorque();
	void setFuelType(string fuelType);
	string getFuelType();

	void printEngine();

private:
	string volume;
	string hp;
	string torque;
	string fuelType;

};

