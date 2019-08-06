#include "Book.h"



Book::Book()
{
}

void Book::readData() {
	cout << "Please Enter Info for a Book.\n";
	Publication::readData();
	cout << "Enter Page Count: \n";
	cin >> pageCount;
	Sales::readData();

}

void Book::displayData() {
	Publication::displayData();

	cout << "The Page Count: " << pageCount << endl;

	Sales::displayData();

}