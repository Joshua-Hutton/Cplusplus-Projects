#pragma once
#include "Publication.h"
#include "Sales.h"

class Book : public Publication, public Sales  {
private:
	int pageCount = 0;

public:
	Book();
	void readData();
	void displayData();

};

