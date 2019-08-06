#pragma once
#include <iostream>
#include <string>

using namespace std;

class Publication {
private:
	string title = "none";
	double price = 0.00;
public:
	virtual void readData();
	virtual void displayData();

};