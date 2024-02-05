#include "LuxuryCars.h"

LuxuryCars::LuxuryCars(string brand, string model, string type, string color, string vin, string plate, double fuelConsumption, double taxLC, double rangeLC, int lcExtras) : Cars(brand, model, type, color, vin, plate, fuelConsumption)
{
	setTaxLC(taxLC);
	setRangeLC(rangeLC);
	setlcExtras(lcExtras);
}

void LuxuryCars::setTaxLC(double taxLC)
{
	this->taxLC = taxLC;
}

double LuxuryCars::getTaxLC()
{
	return this->taxLC;
}

void LuxuryCars::setRangeLC(double rangeLC)
{
	this->rangeLC = rangeLC;
}

double LuxuryCars::getRangeLC()
{
	return this->rangeLC;
}

void LuxuryCars::setlcExtras(int lcExtras)
{
	this->lcExtras = lcExtras;
}

int LuxuryCars::getlcExtras()
{
	return this->lcExtras;
}

void LuxuryCars::display()
{
	cout << "Brand" << brand << endl;
	cout << "Model" << model << endl;
	cout << "Type" << type << endl;
	cout << "Color" << color << endl;
	cout << "Vin" << vin << endl;
	cout << "Plate" << plate << endl;
	cout << "Fuel Consumption" << fuelConsumption << endl;
	cout << "Tax" << taxLC << endl;
	cout << "Range" << rangeLC << endl;
	cout << "Extras" << lcExtras << endl;
}

double LuxuryCars::getReceipt() {
	double lcCoef = (rangeLC < 200) ? 0.6 : 0.4;
	return (taxLC + lcExtras) * lcCoef;
}
