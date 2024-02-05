#pragma once
#include "Drinks.h"
class Alcoholic :  public Drinks
{
public:
	Alcoholic(string drName, double drPrice,int quantity, string alcoholCont, string type, double alcoholTax);
	void setAlcoholCont(string alcoholCont);
	string getAlcoholCont();

	void setType(string type);
	string getType();
    void setAlcoholTax(double alcoholTax);
	double getAlcoholTax();

	void calculatePrice(); //CalculatePrice() > Quantity * (Price * Tax)


	void displayDrink();

private:
	string alcoholCont;
	string type;
	double alcoholTax;


};

