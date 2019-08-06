#include "Publication.h"

void Publication::readData() {
	cout << "Enter Title: \n";
	cin.ignore();
	getline (cin, title, '\n');
	cout << "Enter Price: \n";
	cin >> price;

}

void Publication::displayData() {
	cout << "\n--------------------\n\n";
	cout << "The Title: " << title << endl;
	cout << "The Price: " << price << endl;
}