#include "Member.h"

Member::Member(string name, int age, string memberID){
	this->name = name;
	this->age = age; // инициализиране на полетата на класа
	this->memberID = memberID;
}

Member::Member(){
this->name = "           ";
	this->age = 0;
	this->memberID = "            ";}


void Member::setName(string name){
	this->name = name;
}
void Member::setAge(int age){
	this->age = age;
}
void Member::setMemberID(string memberID){
	this->memberID = memberID;   // дефиниране на методите
}
string Member::getName(){
	return this-> name;
}
int Member::getAge(){
	return this->age;
}
string Member::getMemberID(){
	return this->memberID;
}
void Member::printMember(){
	cout << "Name: " <<this->name << endl;
	cout << "Age: " << this->age <<endl;
	cout << "Member ID: " << this->memberID << endl;
}

void Member::borrowBook(Book* book){
	cout << name << " Is borrowing : " << book->getTitle() << endl;
}

