#include "Department.h"
#include "Employee.h"

#include <iostream>

int main()
{
   Employee employee1("Jax", "ADS998877", "Junior");
   Employee employee2("Marcus", "ADS112233", "Senior"); // Инициализация на обектите от класа Employee
   

   Department department("IT"); // Инициализация на обекта от класа Department




   department.addEmployee(&employee1); // Добавяне на обектите от класа Employee към обекта от класа Department
   department.addEmployee(&employee2);
  

   department.displayEmployees();

   





}

