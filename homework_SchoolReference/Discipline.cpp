#include"Discipline.h"
#include <iostream>

Discipline::Discipline(string name, int lNumbers, int eNumbers) {
	this->name = name;
	this->lecturesCount = lNumbers;
	this->exerciesCount = eNumbers;

}
void Discipline::printDis() {

	cout << this->name << " " << this->lecturesCount << " " << this->exerciesCount;
}