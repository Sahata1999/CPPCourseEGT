#pragma once
#include <string>
#include <vector>
#include "Drinks.h"
using namespace std;

class Customer
{
public:
	Customer(string username);
	void setUsername(string username);
	string getUsername();

private:
	string username;
	



};

