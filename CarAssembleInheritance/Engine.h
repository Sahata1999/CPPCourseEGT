#pragma once
#include "Car.h"
class Engine : public Car
{
public:
	Engine(string name,int price,string volume, string power, string torque, string fuelType); 

	void setVolume(string volume);
	void setPower(string power);
void setTorque(string torque);
void setFuelType(string fuelType);
string getVolume();
string getPower();
string getTorque();
string getFuelType();

void printEngine();






private:
	string volume;
	string power;
	string torque;
	string fuelType;
};

