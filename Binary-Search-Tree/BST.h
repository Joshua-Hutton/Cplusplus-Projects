#pragma once
#include <iostream>
#include <string>
using namespace std;


class BST {
	friend ostream& operator<<(ostream &os, const BST &bst);

private:
	struct Node {
		string data;
		Node *left;
		Node *right;

	};
	Node *root;

public:
	BST();
	
	
	void insert(string);
	void insert(Node*, string);
	void inOrder(Node*);
	void postOrder(Node*);
	void preOrder(Node*);
	void printPre();
	void printPost();
	void printOrder();
};