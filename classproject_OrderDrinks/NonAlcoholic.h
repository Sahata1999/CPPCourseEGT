#pragma once
#include "Drinks.h"
class NonAlcoholic : public Drinks
{
	public:
	NonAlcoholic(string drName, double drPrice, int quantity, double tax, double liters);

	void setTax(double tax);
	double getTax();

	void setLiters(double liters);
	double getLiters();

	void displayDrink();

	void calculatePrice(); // CalculatePrice() > Quantity * (Price + CityTax)	




private:
	
	double tax;
	double liters;




};

