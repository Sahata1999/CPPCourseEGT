#pragma once
#include <iostream>;
#include <string>;
using namespace std;

class Car
{
public:
	Car(string name, int price);

	void setName(string name);
string getName();
void setPrice(int price);
	int getPrice();

	void printCar();


protected:
	string name;
	int price;

};

