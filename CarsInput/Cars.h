#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cars
{
public:
	Cars(string brand, string model, int year, string color, string fuel, string transmission, string vin, string plate);
	void setBrand(string brand);
	void setModel(string model);
	void setYear(int year);
	void setColor(string color);
	void setFuel(string fuel);
	void setTransmission(string transmission);
	void setVin(string vin);
	void setPlate(string plate);

	void print();

	string getBrand();
	string getModel();
	int getYear();
	string getColor();
	string getFuel();
	string getTransmission();
	string getVin();
	string getPlate();

private:
	string brand;
	string model;
	int year;
	string color;
	string fuel;
	string transmission;
	string vin;
	string plate;
};