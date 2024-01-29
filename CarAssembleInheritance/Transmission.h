#pragma once
#include "Car.h"


class Transmission : public Car
{
public:

	Transmission(string name, int price, string transType, int gears);
	void setTransType(string transType);
string getTransType();
void setGears(int gears);
int getGears();

void printTransmission();



private:
	string transType;
	int gears;
};

