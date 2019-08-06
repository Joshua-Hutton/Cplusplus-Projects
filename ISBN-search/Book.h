#include <iostream>
#include <sstream>


class Book
{
private:
	std::string title;
	std::string authorLastName;
	std::string authorFirstName;
	std::string middleInital;
	std::string isbn;
	double price;
	std::string publisher;
	long publicaionDate;
	int numberPages;
	int inventoryCount;
	
public:
	Book(std::string);
	std::string Book::getTitle();
	std::string Book::getAuthorLast();
	std::string Book::getAuthorFirst();
	std::string Book::getAutherMiddle();
	std::string Book::getIsbn();
	double Book::getPrice();
	std::string Book::getPublisher();
	int Book::getPubDate();
	int getPages();
	int Book::getInventory();
	int Book::adjustInventory(int);

};
