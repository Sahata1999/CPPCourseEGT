#pragma once
#include "Cars.h"
class LuxuryCars : public Cars

{ 
public:
	LuxuryCars(string brand, string model, string type, string color, string vin, string plate, double fuelConsumption, double taxLC, double rangeLC , int lcExtras);

	double getReceipt();
	void display();

	void setTaxLC(double taxLC);
	double getTaxLC();
	void setRangeLC(double rangeLC);
	double getRangeLC();

	void setlcExtras(int lcExtras);
	int getlcExtras();


private:
	double taxLC;
	double rangeLC;
	int lcExtras;

};

