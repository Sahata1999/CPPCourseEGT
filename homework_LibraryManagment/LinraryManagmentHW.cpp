#include "Book.h"
#include "Member.h"
#include <iostream>

using namespace std;

int main()
{
	int numberOfBooks = 3; 

	Book* books = new Book[numberOfBooks]; // създаване на масив от обекти от тип Book
	books[0] = Book("Samurai Jax", "Riot", "d1231s253214124a13");
	books[1] = Book("Rust", "Mike Foreman", "196ysadaf213");// инициализиране на обектите от тип Book
books[2] = Book("C++", "Bjarne Stroustrup", "12asd312dsa3123123");

int numberOfMembers = 3;

Member* members = new Member[numberOfMembers]; // създаване на масив от обекти от тип Member

members[0] = Member("Mike Tyson", 65, "123ASD");
members[1] = Member("John Cena", 23, "12asdsaghgaD");
members[2] = Member("Mike Foreman", 12, "1asghj99");  // инициализиране на обектите от тип Member

members[0].printMember();
members[1].printMember();	// извикване на метода printMember
members[2].printMember();

members[0].borrowBook(&books[0]);
members[0].borrowBook(&books[1]); // извикване на метода borrowBook
members[0].borrowBook(&books[2]);

members[1].borrowBook(&books[0]);
members[1].borrowBook(&books[1]); // извикване на метода borrowBook
members[1].borrowBook(&books[2]);

members[2].borrowBook(&books[0]);
members[2].borrowBook(&books[1]); // извикване на метода borrowBook
	
members[2].borrowBook(&books[2]);
}

