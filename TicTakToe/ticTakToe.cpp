#include "ticTackToe.h"

void ticTackToe::printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int i2 = 0; i2 < 3; i2++) {
			cout << board[i][i2] << ' ';
		}
		cout << endl;
	}
}

int ticTackToe::checkWinner() {
	if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x') {
		return 1;
	}
	else if(board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x') {
		return 1;
	}
	else if(board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x') {
		return 1;
	}
	else if(board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x') {
		return 1;
	}
	else if(board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x') {
		return 1;
	}
	else if(board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x') {
		return 1;
	}
	else if(board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') {
		return 1;
	}
	else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {
		return 2;
		}
	else if (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o') {
		return 2;
	}
	else if (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o') {
		return 2;
	}
	else if (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o') {
		return 2;
	}
	else if (board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o') {
		return 2;
	}
	else if (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o') {
		return 2;
	}
	else if (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o') {
		return 2;
	}
	else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') {
		return 2;
	}
	else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {
		return 2;
	}

	else {
		return 0;
		}
	}

int ticTackToe::endGame() {
	int theEnd = 1;

	for (int i = 0; i < 3; i++) {
		for (int i2 = 0; i2 < 3; i2++) {
			if (board[i][i2] == '_') {
				theEnd = 0;
			}
		}
	}
	return theEnd;
}



int ticTackToe::movePlayerOne(int a, int b) {
	if (a < 3 && b < 3 ) {
		if (board[a][b] != 'x' && board[a][b] != 'o') {
			board[a][b] = playerOne;
			return 0;
		}
		else {
			cout << "space taken make another move.\n";
			return 1;
		}

	}
	else {
		cout << "Invalid Move!\n";
		return 1;
	}
	}


int ticTackToe::movePlayerTwo(int a, int b) {
	if (a < 3 && b < 3 ) {
		if (board[a][b] != 'x' && board[a][b] != 'o') {
			board[a][b] = playerTwo;
			return 0;
		}
		else {
			cout << "space taken make another move.\n";
			return 1;
		}

	}
	else {
		cout << "Invalid Move!\n";
		return 1;
	}
}




ticTackToe::ticTackToe()
{
}


ticTackToe::~ticTackToe()
{
}
