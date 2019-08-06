#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double d) {
	Accounts::setBalance(d);

}

void CheckingAccount::debit(Accounts& a, double d) {
	double b = a.getBalance();
	double transactionFee = d * fee;
	d += transactionFee;
	if (b > d ) {
		Accounts::debit(d);
	}
	else{
		cout << "Insoficent Funds! \n";
	}
	
}

void CheckingAccount::credit(Accounts& a, double c) {
	
	double transactionFee = c * fee;
	c -= transactionFee;
	Accounts::credit(c);

}

void CheckingAccount::printBalance() {
	cout << "Checking ";
	Accounts::printBalance();
	cout << endl;
}