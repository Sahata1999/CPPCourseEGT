#include"Discipline.h"
#include "Teacher.h"
#include <iostream>

int main() {


	Discipline displ("History", 45, 69);
	Teacher t1("Ivan Ivanov", "mr", displ);
	t1.print();


}