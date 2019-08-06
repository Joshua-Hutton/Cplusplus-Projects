#include "MyLinkList.h"



MyLinkList::MyLinkList() {
	head = nullptr;
	tail = nullptr;

}

node* MyLinkList::getHead() {
	return head;
}

void MyLinkList::createNode(int value) {
	node *temp = new node;
	temp->data = value;
	temp->next = nullptr;
	if (head == nullptr) {
		head = temp;
		tail = temp;
		temp = nullptr;

	}
	else {
		tail->next = temp;
		tail = temp;
	}
}


void MyLinkList::display() {
	node *temp = new node;
	temp = head;
	
	do
	{
		cout << temp->data << ", ";
		temp = temp->next;
		
	} while (temp->next != nullptr);

	cout << temp->data << ", ";
	temp = temp->next;

}


void MyLinkList::insertStart(int value) {
	node *temp = new node;
	temp->data = value;
	temp->next = nullptr;
	if (head == nullptr) {
		head = temp;
		tail = temp;
	}
	else {
		temp->next = head;
		head = temp;
	}
}

void MyLinkList::orderedInsert(int value) {
	
	node *temp = new node;
	temp->data = value;
	temp->next = nullptr;

	node *temp2 = head;
	node **temp3 = &head;
	while (temp2 != NULL && temp2->data < temp->data) {
		temp3 = &temp2->next;
		temp2 = temp2->next;

	}
	*temp3 = temp;
	temp->next = temp2;

}

void MyLinkList::insertPosition(int pos, int value) {
	node *pre = new node;
	node *cur = new node;
	node *temp = new node;
	cur = head;
	for (int i = 1; i < pos; i++) {
		pre = cur;
		cur = cur->next;
		
	}
	temp->data = value;
	pre->next = temp;
	temp->next = cur;

}


void MyLinkList::deleteFirst() {
	node *temp = new node;
	temp = head;
	head = head->next;
	delete temp;

}


void MyLinkList::deleteLast() {
	node *cur = new node;
	node *pre = new node;
	cur = head;
	while (cur->next != nullptr) {
		pre = cur;
		cur = cur->next;
	}
	tail = pre;
	pre->next = nullptr;
	delete cur;
}


void MyLinkList::deletePosition(int pos) {
	node *cur = new node;
	node *pre = new node;

	cur = head;

	for (int i = 1; i < pos; i++) {
		pre = cur;
		cur = cur->next;
	}
	pre->next = cur->next;

}

int MyLinkList::listSum() {
	node *temp = head;
	int sum = 0;
	while (temp->next != nullptr) {
		sum += temp->data;
		temp = temp->next;
	}
	sum += temp->data;
	return sum;

}

int MyLinkList::listAverage() {
	node *temp = head;
	int sum = 0;
	int avg = 0;
	int count = 0;
	while (temp->next != nullptr) {
		sum += temp->data;
		temp = temp->next;
		count++;
	}
	sum += temp->data;
	avg = sum / (count + 1);
	return avg;

}
