#pragma once
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;
class Department // Декларация на класа Department
{
public:
	Department(string departmentName);
	void setDepartmentName(string departmentName);
	string getDepartmentName();
	void addEmployee(Employee* employee);
	void displayEmployees(); // Декларация на методите на класа Department
	


private:
	string departmentName;
	Employee* employee; // Декларация на полетата на класа Department
	
};

