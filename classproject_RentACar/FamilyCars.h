#pragma once
#include "Cars.h"
class FamilyCars :public Cars

{
	public:
	FamilyCars(string brand, string model, string type, string color, string vin, string plate, double fuelConsumption, double taxFC, double rangeFC);
	
	
	void setTaxFC(double taxFC);
	double getTaxFC();
	void setRangeFC(double rangeFC);
	double getRangeFC();
	double getReceipt();
	void display();




private:

	double taxFC;
	double rangeFC;


};

