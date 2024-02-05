#pragma once
#include <string>
#include <iostream>
using namespace std;
class Drinks
{
public:
	Drinks(string drName, double drPrice,int quantity);

	void setDrName(string drName);
	string getDrName();

	void setDrPrice(double drPrice);
	double getDrPrice();

	void setQuantity(int quantity);
	int getQuantity();

	virtual void displayDrink();

protected:
	string drName;
	double drPrice;
	int quantity;

	


};

