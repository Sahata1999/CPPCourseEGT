#include "Alcoholic.h"

Alcoholic::Alcoholic(string drName, double drPrice, int quantity, string alcoholCont, string type, double alcoholTax)
	:Drinks(drName, drPrice, quantity)
{
	setAlcoholCont(alcoholCont);
	setType(type);
	setAlcoholTax(alcoholTax);
}

void Alcoholic::setAlcoholCont(string alcoholCont)
{
	this->alcoholCont = alcoholCont;
}

string Alcoholic::getAlcoholCont()
{
	return alcoholCont;
}

void Alcoholic::setType(string type)
{
	this->type = type;
}

string Alcoholic::getType()
{
	return type;
}

void Alcoholic::setAlcoholTax(double alcoholTax)
{
	this->alcoholTax = alcoholTax;
}

double Alcoholic::getAlcoholTax()
{
	return alcoholTax;
}

	void Alcoholic::calculatePrice(){
		double price = getDrPrice();
		double tax = getAlcoholTax();
		int quantity = getQuantity();
		double totalPrice = quantity * (price * tax);
		cout << "Total Price: " << totalPrice << endl;
	}






void Alcoholic::displayDrink()
{
	Drinks::displayDrink();
	cout << "Alcohol Content: " << getAlcoholCont() << endl;
	cout << "Type: " << getType() << endl;
	cout << "Alcohol Tax: " << getAlcoholTax() << endl;
}

