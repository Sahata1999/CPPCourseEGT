#pragma once
#include <iostream>
#include <string>	
#include "Engine.h"
using namespace std;


class Car
{
public:
	Car(string, int, Engine&);

	void setName(string name);
	string getName();
	void setPrice(int price);
	int getPrice();
	
	

	

	void printCar();


private:
	string name;
	int price;
	Engine engine;

};

