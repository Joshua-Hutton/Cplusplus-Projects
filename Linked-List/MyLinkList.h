#pragma once
#include <iostream>
using namespace std;



struct node {
	int data;
	node *next;
};


class MyLinkList {
private:
	
	node *head; 
	node *tail;
	
public:
	MyLinkList();
	node* getHead();
	void createNode(int);
	void display();
	void insertStart(int);
	void orderedInsert(int);
	void insertPosition(int, int);
	void deleteFirst();
	void deleteLast();
	void deletePosition(int);
	int listSum();
	int listAverage();
	
};

