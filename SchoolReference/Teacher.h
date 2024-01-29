#pragma once
#include<string>
using namespace std;
#include "Discipline.h"


class Teacher {
public:

	Teacher(string, string, Discipline&);
	void print();
private:
	string name;
	string title;
	Discipline discipline;
};