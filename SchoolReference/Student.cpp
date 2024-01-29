#include "Student.h"
#include <iostream>

Student::Student(string name, int id) {
	setName(name);
	setID(id);
}

void Student::setName(string name) {
	this->name = name;
}
void Student::setID(int id) {
	this->id = id;
}

void Student::printInfo() {
	cout << "Student name" << this->name << " and id" << this->id << endl;
}