#pragma once
#include<string>
using namespace std;


class Discipline {
public:
	Discipline(string, int, int);
	void printDis();



private:
	string name;
	int lecturesCount;
	int exerciesCount;
};