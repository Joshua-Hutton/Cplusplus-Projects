#include "Tape.h"



Tape::Tape()
{
}

void Tape::readData() {
	cout << "Please Enter Info for a Tape. \n";

	Publication::readData();
	cout << "Enter Play Time: \n";
	cin >> playTime;
	Sales::readData();

}

void Tape::displayData() {
	Publication::displayData();
	cout << "The Play Time: " << playTime << " minutes. \n";
	Sales::displayData();
}
