// readBooks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>	
#include <string>
using namespace std;
void printDragon() {
	string dragon =
		"                          I AM THELONIOUS! \n"
		"                      THELONIOUS LIKES TO READ! \n"
		"                    ____====-_        _-====___                      \n"
		"              __^^^       / /          \\ \\      ^^^__                \n"
		"            --           / /   (    )   \\ \\           --             \n"
		"           ^            / /    :\\^^/:    \\ \\            ^            \n"
		"          -            ( (     (0::0)     ) )            -           \n"
		"         /              \\ \\     \\\\//     / /               \\         \n"
		"        --               \\ \\    (oo)    / /                 --       \n"
		"       /                  \\ \\  / \\/ \\  / /                   \\       \n"
		"     --                    \\ \\/      \\/ /                     --     \n"
		"    --                      \\(        )/                       --    \n"
		"   --                  /\\    (   /\\   )     /\\                  --   \n"
		"  / /:           /\\   /  \\_ _(: :  : :) _ _/  \\   /\\           :\\ \\  \n"
		" : / : /\\_/\\_/\\_/  \\_/      / : :  : : \\       \\_/  \\_/\\_/\\_/\\ : \\ : \n"
		"  V  :/  V  V  '    V     <(  : :  : :  )>      V    '  V  V  \\:  V  \n"
		"     '                   <__\\_: :  : :_/__>                    '     \n"
		"                         ^^^^ ^^^  ^^^ ^^^^                          \n";
	cout << dragon << endl;
	
}


int main()
{
	ifstream inputFile;
	inputFile.open("c:\\temp\\books.txt", ios::in);
	if (!inputFile.is_open()) {
		cout << "The file could not be opened or found." << endl;
		system("pause");
		return 1;
	}

	vector<Book> books;

	string rowData;

	getline(inputFile, rowData);


	while (getline(inputFile, rowData)) {

		Book newBook = Book(rowData);
		books.push_back(newBook);
	}

	string menu = "";
	string searchIsbn = "";
	int invetoryAjustment = 0;
	string bookIsbn = "";
	cout << "Welcome to Book Inventory. \n\n";

	do {
		cout << "\n 1. Display Book Details \n 2. Adjust Inventory Counts \n 3. Display Inventory \n\n";
		cout << "Enter single didget number to select menu option. \nType \"quit\" to quit. \n\n";
		cin >> menu;
		
		try{
			switch (stoi(menu)) {
			case 1:
				while (searchIsbn != "return") {
					cout << "Enter ISBN: \n Type \"return\" to return to main menu.\n";
					cin >> searchIsbn;
					if (searchIsbn == "return")
						break;
					cout << "Search Results for ISBN: " << searchIsbn << "\n\n";
					for (int i = 0; i < books.size(); i++) {
						bookIsbn = books[i].getIsbn();
						if (searchIsbn == bookIsbn) {
							cout << "Book Title, Author Last Name, Author First Name, Middle Intital, ISBN, Price, Publisher, Publication Date, Pages, Inventory Count\n\n";
							cout << books[i].getTitle() << ", " << books[i].getAuthorLast() << ", " << books[i].getAuthorFirst() << ", ";
							cout << books[i].getAutherMiddle() << ", " << books[i].getIsbn() << ", " << books[i].getPrice() << ", " << books[i].getPublisher();
							cout << ", " << books[i].getPubDate() << ", " << books[i].getPages() << ", " << books[i].getInventory() << "\n\n\n";
						}

					}
					cout << "Search another book? \nType \"yes\" to continue. \nType \"return\" to return to main menu.\n";
					cin >> searchIsbn;
				}
				searchIsbn = "";
				break;

			case 2:
				while (searchIsbn != "return") {
					cout << "Enter ISBN: \n Type \"return\" to return to main menu.\n";
					cin >> searchIsbn;
					if (searchIsbn == "return")
						break;
					cout << "Search Results for ISBN: " << searchIsbn << endl;
					for (int i = 0; i < books.size(); i++) {
						bookIsbn = books[i].getIsbn();
						if (searchIsbn == bookIsbn) {
							cout << "Title Found: " << books[i].getTitle() << "\nCurent Inventory count is: " << books[i].getInventory() << endl;
							cout << "How Much would you like to add to inventory? \n\n *Hint* Add negative number to decress Invenory. \n\n";
							cin >> invetoryAjustment;
							books[i].adjustInventory(invetoryAjustment);
							cout << "Inventory changed to: " << books[i].getInventory() << endl;
						}

					}
					cout << "would you like to adjust the inventory count of another book? \n\n";
					cout << "Type \"yes\" to continue. \n\"return\" to return to main menu.\n";
					cin >> searchIsbn;

				}
				searchIsbn = "";
				break;

			case 3:
				while (searchIsbn != "return") {
					cout << "Enter ISBN: \n Type \"return\" to return to main menu.\n";
					cin >> searchIsbn;
					if (searchIsbn == "return")
						break;
					cout << "Search Results for ISBN: " << searchIsbn << endl;
					for (int i = 0; i < books.size(); i++) {
						bookIsbn = books[i].getIsbn();
						if (searchIsbn == bookIsbn) {
							cout << "Tilte found: " << books[i].getTitle() << "\nCurent Inventory count is: " << books[i].getInventory() << "\n\n";

						}

					}
					cout << "Search another book? \n Type \"yes\" to continue. \n\"return\" to return to main menu.\n";
					cin >> searchIsbn;

				}
				searchIsbn = "";
				break;
			case 4:
				printDragon();
				break;
			}
		}
		catch (const std::exception&)
		{
			cout << "Invalaid Menu option or \"quit\" \n\n";
		}
			

		
			
		
	} while (menu != "quit");


	inputFile.close();

	system("pause");
	return 0;
}
