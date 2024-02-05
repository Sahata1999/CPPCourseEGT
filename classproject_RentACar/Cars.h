#pragma once
#include<string>
#include<iostream>
using namespace std;
class Cars
{
public:

	Cars(string brand, string model, string type, string color, string vin, string plate, double fuelConsumption);
   
	void setBrand(string brand);
	string getBrand() ;

	void setModel(string model);
	string getModel() ;

	void setType(string type);
	string getType() ;

	void setColor(string color);
	string getColor() ;

	void setVin(string vin);
	string getVin() ;

	void setPlate(string plate);
	string getPlate() ;

	void setFuelConsumption(double fuelConsumption);
	double getFuelConsumption() ;

	virtual double getReceipt();

	virtual void display();







protected:
	string brand;
	string model;
	string type; // sedan, combi, hatchback, suv and etc.
	string color;
	string vin;
	string plate;
	double fuelConsumption;




};

//Да се разработи малка система за фирма за коли под наем.
//За всяка кола се съхранява информация за :
//марка, модел, вид, цвят, номер на шасито, номе на колата и разход на гориво.
//(Под вид се разбира седан, комби, хечбек, ...).

