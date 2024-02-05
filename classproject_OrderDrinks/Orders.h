#pragma once
#include <string>
#include <vector>
#include "Drinks.h"
using namespace std;
class Orders 
{
public:
	

	Orders(Drinks* drinks, string date);

	void setDate(string date);
	string getDate();


	void printOrderInfo();

	

	
	double getTotalAmount();



private:
	vector<Drinks*> drinks;
	string date;
	
};

