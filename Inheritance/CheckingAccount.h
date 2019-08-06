#pragma once
#include "Accounts.h"
class CheckingAccount : public Accounts
{
private:
	const double fee = 0.02;

public:
	
	CheckingAccount(double);
	void credit(Accounts& a, double c);
	void debit(Accounts& a, double d);
	void printBalance();

};

