#include "stdafx.h"
#include "book.h"

Book::Book(std::string rowData)
{
	std::istringstream columns(rowData);
	std::string column;

	int counter = 0;
	while (getline(columns, column, ',')) {
		switch (counter) {
		case 0:
			title = column;
			break;
		case 1:
			authorLastName = column;
			break;
		case 2:
			authorFirstName = column;
			break;
		case 3:
			middleInital = column;
		case 4:
			isbn = column;
			break;
		case 5:
			price = stod(column);
			break;
		case 6:
			publisher = column;
			break;
		case 7:
			publicaionDate = stol(column);
			break;
		case 8:
			numberPages = stoi(column);
			break;
		case 9:
			inventoryCount = stoi(column);
			break;
		}

		counter++;
	}
}

std::string Book::getTitle() {
	return title;
}

std::string Book::getAuthorLast() {
	return authorLastName;
}

std::string Book::getAuthorFirst() {
	return authorFirstName;
}

std::string Book::getAutherMiddle() {
	return middleInital;

}

std::string Book::getIsbn() {
	return isbn;
}

double Book::getPrice() {
	return price;
}

std::string Book::getPublisher() {
	return publisher;
}

int Book::getPubDate() {
	return publicaionDate;
}

int Book::getPages() {
	return numberPages;
}

int Book::getInventory() {
	return inventoryCount;
}

int Book::adjustInventory(int inventoryAdjustment) {
	inventoryCount = inventoryCount + inventoryAdjustment;
	return inventoryCount;
}
