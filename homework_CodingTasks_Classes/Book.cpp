#include "Book.h"
Book::Book(string title, string author, int pages) {
setTitle(title);
setAuthor(author);
setPages(pages);
}
void Book::setTitle(string title) {
	this->title = title;
}
void Book::setAuthor(string author) {
	this->author = author;
}
void Book::setPages(int pages) {
	this->pages = pages;
}
string Book::getTitle() {
	return title;
}
string Book::getAuthor() {
	return author;
}
int Book::getPages() {
	return pages;
}

void Book::display() {
	cout << "Title: " << getTitle() << endl;
	cout << "Author: " << getAuthor() << endl;
	cout << "Pages: " << getPages() << endl;
}