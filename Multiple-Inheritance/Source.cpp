#include <iostream>
#include "Publication.h"
#include "Tape.h"
#include "Book.h"

using namespace std;


void main() {
	cout << "Publication List \n----------------\n\n";

	Publication *arrPub[5];
	arrPub[0] = new Book;
	arrPub[1] = new Book;
	arrPub[2] = new Book;
	arrPub[3] = new Tape;
	arrPub[4] = new Tape;

	for (int i = 0; i < 5; i++) {
		arrPub[i]->readData();
	} 
	for (int i = 0; i < 5; i++) {
		arrPub[i]->displayData();
	}

	



	system("pause");

}