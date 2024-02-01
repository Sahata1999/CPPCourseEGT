#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee // Декларация на класа Employee
{
public:
	Employee(string name, string employeeID, string position); // Декларация на конструктора на класа Employee

	void setName(string name);
	void setEmployeeID(string employeeID); // Декларация на методите на класа Employee
	void setPosition(string position);

	string getName();
	string getEmployeeID(); // Декларация на методите на класа Employee
	string getPosition();

	void display();



private:

	string name;
	string employeeID; // Декларация на полетата на класа Employee
	string position;
};

