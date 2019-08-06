#include "Accounts.h"


Accounts::Accounts() {
	balance = 0;
}

Accounts::Accounts(double b) {
	balance = b; 
}

void Accounts::setBalance(double b) {
	balance = b;
}

double Accounts::getBalance() {
	return balance;

}

void Accounts::printBalance() {
	cout << "Account balance is: " << balance << endl;

}

void Accounts::debit(double d) {
	if (d < balance) {
		balance -= d;
	}
	else {
		cout << "Insoficent funds\n";
	}
}

void Accounts::credit(double c) {
	balance += c;

}
