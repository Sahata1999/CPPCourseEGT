#include "Cars.h"

Cars::Cars(string brand, string model, string type, string color, string vin, string plate, double fuelConsumption)
{
	setBrand(brand);
	setModel(model);
	setType(type);
	setColor(color);
		setVin(vin);
		setPlate(plate);
		setFuelConsumption(fuelConsumption);

}

void Cars::setBrand(string brand)
{
	this->brand = brand;
}

string Cars::getBrand()
{
	return this->brand;
}

void Cars::setModel(string model)
{
	this->model = model;
}

string Cars::getModel()
{
	return this->model;
}

void Cars::setType(string type)
{
	this->type = type;
}

string Cars::getType()
{
	return this->type;
}

void Cars::setColor(string color)
{
	this->color = color;
}

string Cars::getColor()
{
	return this->color;
}

void Cars::setVin(string vin)
{
	this->vin = vin;
}

string Cars::getVin()
{
	return this->vin;
}

void Cars::setPlate(string plate)
{
	this->plate = plate;
}

string Cars::getPlate()
{
	return this->plate;
}

void Cars::setFuelConsumption(double fuelConsumption)
{
	this->fuelConsumption = fuelConsumption;
}

double Cars::getFuelConsumption()
{
	return this->fuelConsumption;
}

double Cars::getReceipt()
{
	return 0.0;
}

void Cars::display()
{
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Type: " << type << endl;
	cout << "Color: " << color << endl;
	cout << "Vin: " << vin << endl;
	cout << "Plate: " << plate << endl;
	cout << "Fuel Consumption: " << fuelConsumption << endl;
}	