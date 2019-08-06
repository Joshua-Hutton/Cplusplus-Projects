#include <iostream>
#include "ticTackToe.h"
using namespace std;


void main() {

	int moveCheck = 0;
	int winCondition = 0;
	int letfToRight = 0;
	int upToDown = 0;
	int draw = 0;
	ticTackToe game;
	
	cout << "welcome to TicTackToe! \n";
	game.printBoard();
	while (winCondition == 0) {

		cout << "Player one's turn! \n";
		do {
			cout << "Please enter position left to right ex: 0, 1, or 2. \n";
			cin >> letfToRight;
			cout << "Please enter up to down ex: 0, 1, or 2.\n";
			cin >> upToDown;
			moveCheck = game.movePlayerOne(upToDown, letfToRight);
		} while (moveCheck == 1);
		game.printBoard();
		winCondition = game.checkWinner();
		if (winCondition != 0) {
			break;
		}
		draw = game.endGame();
		if (draw == 1) {
			cout << "Draw!\n";
			break;
		}
		do {
			cout << "Player Two's turn! Please enter position left to right.\n";
			cin >> letfToRight;
			cout << "Please enter position up to down.\n";
			cin >> upToDown;
			moveCheck = game.movePlayerTwo(upToDown, letfToRight);
		} while (moveCheck == 1);
		game.printBoard();

		winCondition = game.checkWinner();
	}


		if (winCondition == 1) {
			cout << "Player one wins!\n";
		}
		else if (winCondition == 2) {
			cout << "Player Two wins!\n";

		}
		else if (winCondition != 0 ){
			cout << "error! \n";
		}

		draw = game.endGame();
		if (draw == 1) {
			cout << "Draw!\n";
			winCondition = draw;
		}

	


	system("pause");
 }
