#pragma once
#include "Publication.h"
#include"Sales.h"
class Tape : public Publication, public Sales {
private:
	double playTime = 0.0;

public:
	Tape();
	void readData();
	void displayData();

};

