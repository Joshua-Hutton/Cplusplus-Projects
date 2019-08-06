#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(double d) {
	Accounts::setBalance(d);
}


double SavingsAccount::calculateInterest() {
	double b = Accounts::getBalance();
	b *= intrest;
	return b;
}

void SavingsAccount::printBalance() {
	cout << "Savings ";
	Accounts::printBalance();
	cout << endl;

}
