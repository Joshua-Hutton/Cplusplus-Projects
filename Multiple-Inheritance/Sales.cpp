#include "Sales.h"


void Sales::readData() {
	for (int i = 0; i < 3; i++) {
		cout << "Enter the sales form month " << i + 1 << ": ";

		cin >> arrSales[i];
	}
}

void Sales::displayData() {
	for (int i = 0; i < 3; i++) {
		cout << "sales from month " << i << ": " << arrSales[i] << endl;

	}
}