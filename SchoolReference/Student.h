#pragma once
#include<string>
using namespace std;

class Student {

public:
	Student(string, int);
	void setName(string);
	void setID(int);
	string getName();
	int getID();
	void printInfo();

private:
	string name;
	int id;

};
