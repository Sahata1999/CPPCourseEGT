#include "Department.h"

Department::Department(string departmentName)// Дефиниция на конструктора на класа Department
{
	this->departmentName = departmentName;
}

void Department::setDepartmentName(string departmentName)
{
	this->departmentName = departmentName;
}
string Department::getDepartmentName() // Дефиниция на методите на класа Department
{
	return this->departmentName;
}

void Department::addEmployee(Employee* employee)
{
	this->employee = employee;
}

void Department::displayEmployees()
{
	cout << "Department Name: " << this->departmentName << endl;
	cout << "Employee Name: " << this->employee->getName() << endl;
	cout << "Employee ID: " << this->employee->getEmployeeID() << endl;
	cout << "Employee Position: " << this->employee->getPosition() << endl;
}
