#include "Book.h"

    Book::Book(string title, string author , string ISBN){
		this->title = title;
		this->author = author; // инициализиране на полетата на класа
		this->ISBN = ISBN;
    }

	Book::Book()
	{
	}
	
	void Book::setTitle(string title){
		this->title = title;
	}
void Book::setAuthor(string author){
		this->author = author; // дефиниране на методите
	}
void Book::setISBN(string ISBN){
		this->ISBN = ISBN;
	}
string Book::getTitle(){
		return this-> title;
	}
string Book::getAuthor(){
		return this-> author;
	}
string Book::getISBN(){
		return this->ISBN;
	}

void Book::displayBookInfo() {

cout << "Title: " << title << endl;
	cout << "Author: " << author << endl; // дефиниране на методите
	cout << "ISBN: " << ISBN << endl;
	cout << endl;
}