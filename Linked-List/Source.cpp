#include <iostream>
#include <time.h>
#include <cstdlib>
#include "MyLinkList.h"
using namespace std;

MyLinkList merge(MyLinkList *list1, MyLinkList *list2) {
	MyLinkList tempList;
	node *temp = nullptr;
	temp = list1->getHead();
	int count = 0;
	if (temp != nullptr) {
		while (temp->next != nullptr) {
			temp = temp->next;
			count++;
		}
		temp = list1->getHead();
		for (int i = 0; i < count; i++) {

			tempList.orderedInsert(temp->data);
			temp = temp->next;
		}
	}
	temp = list2->getHead();
	count = 0;
	if (temp != nullptr) {
		while (temp->next != nullptr) {
			temp = temp->next;
			count++;
		}
		temp = list2->getHead();
		for (int i = 0; i < count; i++) {

			tempList.orderedInsert(temp->data);
			temp = temp->next;
		}
	}
	temp = tempList.getHead();
	
	while (temp->next != nullptr) {
		if (temp->data == temp->next->data) {
			node *temp2 = temp->next;
			temp->next = temp2->next;
			delete temp2;
		}
		temp = temp->next;
	}

	return tempList;
}

void main() {

	srand(time(NULL));

	MyLinkList firstList;
	MyLinkList secondList;
	MyLinkList testList;
	int arr[] = { 7, 12, 77, 3, 28 };

	for (int i = 0; i < 15; i++) {
		int randomNumber = rand() % 100 + 1;
		firstList.orderedInsert(randomNumber);
	}
	for (int i = 0; i < 20; i++) {
		int randomNumber = rand() % 100 + 1;
		secondList.orderedInsert(randomNumber);
	}

	for (int i = 0; i < 5; i++) {
	
		testList.orderedInsert(arr[i]);
	}
	cout << "\n================\n\n";
	
	cout << "**First List**\n";
	firstList.display();
	
	
	cout << "\n\n================\n\n";

	cout << "**Second List**\n";
	secondList.display();
	

	cout << "\n\n================\n\n";
	
	cout << "**Test List**\n";
	
	cout << endl;
	testList.display();
	
	cout << "\n\n================\n\n";

	cout << "**Merged Lists**\n";

	MyLinkList merged = merge(&firstList, &secondList);
	merged.display();

	cout << "\nThe sum of merged list is: " << merged.listSum() << endl;
	cout << "The avrage of merged list is: " << merged.listAverage() << endl;
	cout << "\n\n================\n\n";

	system("pause");

}