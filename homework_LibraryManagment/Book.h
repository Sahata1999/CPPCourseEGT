#pragma once
#include <string>
#include <iostream>
using namespace std;


class Book //деклариране на клас

{
public:
	Book(string title, string author, string ISBN); // деклариране на конструктор
	Book();
	
	
	void setTitle(string title); // деклариране на методи
	string getTitle();
	void setAuthor(string author);
	string getAuthor();
	void setISBN(string ISBN);
	string getISBN();

	void displayBookInfo();



	



private:
	
	string title;
	string author; // деклариране на полета на класа
	string ISBN;


};

