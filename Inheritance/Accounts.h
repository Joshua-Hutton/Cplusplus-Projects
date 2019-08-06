#pragma once
#include <iostream>
using namespace std;
class Accounts
{
private:
	double balance;

public:
	Accounts();
	Accounts(double);
	void setBalance(double);
	double getBalance();
	virtual void printBalance();
	virtual void debit(double d);
	virtual void credit(double c);

};

