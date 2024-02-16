#pragma once
#include <iostream>
#include <string>

using namespace std;
class Book
{
public:
	Book(string title, string author, int pages);

	void display();

	void setTitle(string title);
	void setAuthor(string author);
	void setPages(int pages);

	string getTitle();
	string getAuthor();
	int getPages();




private:
	string title;
	string author;
	int pages;
};

