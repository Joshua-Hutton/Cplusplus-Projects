#include <iostream>

using namespace std;

class ticTackToe
{
private:
	char board[3][3] = { {'_','_','_'}, {'_','_','_'}, {'_','_','_'} };
	char playerOne = 'x';
	char playerTwo = 'o';




public:

	void printBoard();
	int checkWinner();
	int endGame();
	int movePlayerOne(int a, int b);
	int movePlayerTwo(int a, int b);





	ticTackToe();
	~ticTackToe();
};

