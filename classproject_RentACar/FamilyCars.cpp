#include "FamilyCars.h"



FamilyCars::FamilyCars(string brand, string model, string type, string color, string vin, string plate, double fuelConsumption, double taxFC, double rangeFC) :Cars(brand, model, type, color, vin, plate, fuelConsumption)
{
	
	setTaxFC(taxFC);
	setRangeFC(rangeFC);
}

void FamilyCars::setTaxFC(double taxFC)
{
	this->taxFC = taxFC;
}

double FamilyCars::getTaxFC()
{
	return this->taxFC;
}

void FamilyCars::setRangeFC(double rangeFC)
{
	this->rangeFC = rangeFC;
}

double FamilyCars::getRangeFC()
{
	return this->rangeFC;
}

void FamilyCars::display()
{
	cout << "Brand" << brand << endl;
	cout << "Model" << model << endl;
	cout << "Type" << type << endl;
	cout << "Color" << color << endl;
	cout << "Vin" << vin << endl;
	cout << "Plate" << plate << endl;
	cout << "Fuel Consumption" << fuelConsumption << endl;
	cout << "Tax" << taxFC << endl;
	cout << "Range" << rangeFC << endl;
}	

double FamilyCars::getReceipt()
{
	
	double fcCoef = (rangeFC < 500) ? 0.7 : 0.4;
	return (taxFC * fcCoef);
	
}