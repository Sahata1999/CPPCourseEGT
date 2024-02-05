#include "Customer.h"


Customer::Customer(string username)
{
	setUsername(username);
}

void Customer::setUsername(string username)
{
	this->username = username;
}

string Customer::getUsername()
{
	return username;
}
