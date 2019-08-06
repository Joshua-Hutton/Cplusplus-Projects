#include "BST.h"

BST::BST() {
	root = nullptr;
}



void BST::insert(string data) {
	Node* n = new Node;
	Node* parent;
	n->data = data;
	n->left = nullptr;
	n->right = nullptr;
	parent = NULL;

	if (root == nullptr) {
		root = n;
	}
	else {
		Node *cur;
		cur = root;
		while (cur) {
			parent = cur;
			if (n->data > cur->data) {
				cur = cur->right;
			}
			else {
				cur = cur->left;
			}
		}

		if (n->data < parent->data) {
			parent->left = n;
		}
		else {
			parent->right = n;
		}
	}
}

void BST::insert(Node *node, string data) {
	if (node == nullptr) {
		node = new Node;
		node->data = data;
		return;
	}
	if (node->data >= data) {
		insert(node->left, data);
	}
	else {
		insert(node->right, data);
	}
}

void BST::inOrder(Node *node) {
	if (node != nullptr) {
		if (node->left) {
			inOrder(node->left);
		}
		cout << node->data << endl;
		if (node->right) {
			inOrder(node->right);
		}
	}
}

void BST::postOrder(Node *node) {
	if (node != nullptr) {
		if (node->left) {
			postOrder(node->left);
		}
		if (node->right) {
			postOrder(node->right);
		}
		cout << node->data << endl;
	}
}
void BST::preOrder(Node *node) {
	if (node) {
		cout << node->data << endl;
		if (node->left) {
			preOrder(node->left);
		}
		if (node->right) {
			preOrder(node->right);
		}
	}
}

void BST::printOrder() {
	inOrder(root);
}

void BST::printPost() {
	postOrder(root);

}

void BST::printPre() {
	preOrder(root);
}


ostream& operator<<(ostream& os, const BST& bst) {
	os << bst.root << endl;
	return os;
}