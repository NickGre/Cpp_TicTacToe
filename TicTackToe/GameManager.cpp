#include "GameManager.h"

void DrawBoard::board()
{
	std::cout << seven << "|" << eight << "|" << nine << std::endl;
	std::cout << four << "|" << five << "|" << six << std::endl;
	std::cout << one << "|" << two << "|" << three << std::endl;
}

void DrawBoard::getBoard() {
	board();
}

void DrawBoard::evalChoice() {
	int playerChoice;
	std::cin >> playerChoice;
	
	char selection;

	if (turn == 1) selection = 'X';
	if (turn == 2) selection = 'O';

	switch (playerChoice) {
	case 1:
		if (one == 'X' || one == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			one = selection;
			break;
		}
		break;
	case 2:
		if (two == 'X' || two == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			two = selection;
			break;
		}
	case 3:
		if (three == 'X' || three == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			three = selection;
			break;
		}
	case 4:
		if (four == 'X' || four == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			four = selection;
			break;
		}
	case 5:
		if (five == 'X' || five == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			five = selection;
			break;
		}
	case 6:
		if (six == 'X' || six == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			six = selection;
			break;
		}
	case 7:
		if (seven == 'X' || seven == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			seven = selection;
			break;
		}
	case 8:
		if (eight == 'X' || eight == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			eight = selection;
			break;
		}
	case 9:
		if (nine == 'X' || nine == 'O') {
			std::cout << "Please select another square." << std::endl;
			evalChoice();
			break;
		}
		else {
			nine = selection;
			break;
		}
	default:
		std::cout << "Invalid selection. Please pick an open number on the grid." << std::endl;
		std::cin.ignore();
		std::cin.get();
		break;
	}
}

void DrawBoard::getCheckStatus() {
	checkStatus();
}

void DrawBoard::checkStatus() {
	//horizontal lines
	if (seven == eight && eight == nine) {
		if (seven == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (seven == 'O') {
			winner = 2;
			gameOn = false;
		}	
	}

	if (four == five && five == six) {
		if (four == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (four == 'O') {
			winner = 2;
			gameOn = false;
		}
	}

	if (one == two && two == three) {
		if (one == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (one == 'O') {
			winner = 2;
			gameOn = false;
		}
	}

	//vertical lines
	if (nine == six && six == three) {
		if (nine == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (nine == 'O') {
			winner = 2;
			gameOn = false;
		}
	}

	if (eight == five && five == two) {
		if (eight == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (eight == 'O') {
			winner = 2;
			gameOn = false;
		}
	}

	if (seven == four && four == one) {
		if (seven == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (seven == 'O') {
			winner = 2;
			gameOn = false;
		}
	}

	//diagonal lines
	if (seven == five && five == three) {
		if (seven == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (seven == 'O') {
			winner = 2;
			gameOn = false;
		}
	}


	if (one == five && five == nine) {
		if (one == 'X') {
			winner = 1;
			gameOn = false;
		}
		else if (one == 'O') {
			winner = 2;
			gameOn = false;
		}
	}
}