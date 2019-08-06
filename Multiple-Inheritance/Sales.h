#pragma once
#include <iostream>
using namespace std;

class Sales
{
private:
	double arrSales[3];

public:
	virtual void readData();
	virtual void displayData();
};

