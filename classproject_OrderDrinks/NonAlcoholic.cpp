#include "NonAlcoholic.h"

NonAlcoholic::NonAlcoholic(string drName, double drPrice, int quantity, double tax, double liters) : Drinks(drName, drPrice, quantity)
{
	setTax(tax);
	setLiters(liters);
}

void  NonAlcoholic::setTax(double tax)
{
	this->tax = tax;
}

double NonAlcoholic::getTax()
{
	return tax;
}

void NonAlcoholic::setLiters(double liters)
{
	this->liters = liters;
}

double NonAlcoholic::getLiters()
{
	return liters;
}

void NonAlcoholic::displayDrink()
{
	Drinks::displayDrink();
	cout << "Tax: " << getTax() << endl;
	cout << "Liters: " << getLiters() << endl;
}

void NonAlcoholic::calculatePrice()
{
	double price = getDrPrice();
	double tax = getTax();
	int quantity = getQuantity();
	double totalPrice = quantity * (price + tax);
	cout << "Total Price: " << totalPrice << endl;
}