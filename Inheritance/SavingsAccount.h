#pragma once
#include "Accounts.h"
#include <iostream>
using namespace std;

class SavingsAccount : public Accounts
{
private:
	double intrest = 0.01;



public:
	
	SavingsAccount(double);
	double calculateInterest();
	void printBalance();

};

