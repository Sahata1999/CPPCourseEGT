#include "Drinks.h"

Drinks::Drinks(string drName, double drPrice,int quantity)
{
	setDrName(drName);
	setDrPrice(drPrice);
	setQuantity(quantity);
}

void Drinks::setDrName(string drName)
{
	this->drName = drName;
}

string Drinks::getDrName()
{
	return drName;
}

void Drinks::setDrPrice(double drPrice)
{
	this->drPrice = drPrice;
}

double Drinks::getDrPrice()
{
	return drPrice;
}

void Drinks::setQuantity(int quantity)
{
	this->quantity = quantity;
}

int Drinks::getQuantity()
{
	return quantity;
}

void Drinks::displayDrink()
{
	cout << "Drink Name: " << getDrName() << endl;
	cout << "Drink Price: " << getDrPrice() << endl;
	cout << "Quantity: " << getQuantity() << endl;
}