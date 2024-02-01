#include "Employee.h"

Employee::Employee(string name, string employeeID, string position)
{
	this->name = name;
	this->employeeID = employeeID; // Инициализация на полетата на класа Employee
	this->position = position;
}

void Employee::setName(string name) // Дефиниция на методите на класа Employee
{
	this->name = name;
}

void Employee::setEmployeeID(string employeeID)
{
	this->employeeID = employeeID;
}

void Employee::setPosition(string position)
{
	this->position = position;
}

string Employee::getName()
{
	return this->name;
}

string Employee::getEmployeeID() // Дефиниция на методите на класа Employee
{
	return this->employeeID;
}

string Employee::getPosition()
{
	return this->position;
}

void Employee::display()
{
	cout << "Name: " << this->name << endl;
	cout << "Employee ID: " << this->employeeID << endl;
	cout << "Position: " << this->position << endl;
}