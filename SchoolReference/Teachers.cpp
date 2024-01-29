#include"Teacher.h"
#include<iostream>

Teacher::Teacher(string name, string title, Discipline& disciple) : discipline(disciple) {
	this->name = name;
	this->title = title;
}


	void Teacher::print() {

		cout << "Teacher name " << this->name << " title " << this->title << " and discipline ";
		this->discipline.printDis();
	}
