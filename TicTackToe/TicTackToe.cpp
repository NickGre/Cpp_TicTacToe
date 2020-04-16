#include <iostream>
#include "GameManager.h"

int main() {
	DrawBoard db;
	db.getBoard();

	while (db.gameOn == true) {
		 //Try to get game end conditions working

		if (db.turn == 1) {
			std::cout << "Player 1 choose a square: " << std::endl;
			db.evalChoice();
			db.getBoard();
			db.turn = 2;
			db.getCheckStatus();
		}

		else if (db.turn == 2) {
			std::cout << "Player 2 choose a square: " << std::endl;
			db.evalChoice();
			db.getBoard();
			db.turn = 1;
			db.getCheckStatus();
		}
	}
	
	std::cout << "Player " << db.winner << " Wins!";
	std::cin.get();
	return 0;
}