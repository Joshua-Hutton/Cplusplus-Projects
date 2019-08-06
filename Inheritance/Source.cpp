#include <iostream>
#include "Accounts.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

void main() {

	CheckingAccount checking(500.00);
	SavingsAccount savings(1000.00);
	
	checking.printBalance();
	cout <<	"-----------------------\n\n";
	savings.printBalance();
	cout << "-----------------------\n\n";

	checking.debit(checking, 230.00);
	savings.debit(100.85);

	checking.printBalance();
	cout << "-----------------------\n\n";
	savings.printBalance();
	cout << "-----------------------\n\n";

	checking.credit(checking, 400.25);
	checking.printBalance();
	cout << "-----------------------\n\n";

	checking.credit(checking, 250.00);
	checking.printBalance();
	cout << "-----------------------\n\n";

	savings.credit(500.00);
	savings.printBalance();
	cout << "-----------------------\n\n";

	checking.debit(checking, 2000.00);
	checking.printBalance();
	cout << "-----------------------\n\n";

	savings.debit(1000.00);
	savings.printBalance();
	cout << "-----------------------\n\n";

	savings.debit(1500.00);
	savings.printBalance();
	cout << "-----------------------\n\n";

	savings.credit(-500.00);
	savings.printBalance();
	cout << "-----------------------\n\n";


	system("pause");

}