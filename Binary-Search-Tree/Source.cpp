#include <iostream>
#include <string>
#include <sstream>

#include "BST.h"

using namespace std;

void main() {
	BST tree;
	string sentence;
	string temp;
	cout << "Please enter a sentence. \n";
	getline(cin, sentence);
	
	istringstream stream(sentence);
	while (getline(stream, temp, ' ')) {
		tree.insert(temp);
	}

	

	cout << "Your sentence was: " << sentence << endl;
	cout << "In order print:\n";
	tree.printOrder();

	cout << "preorder print:\n";
	tree.printPre();

	cout << "post order print: \n";
	tree.printPost();


	system("pause");
}