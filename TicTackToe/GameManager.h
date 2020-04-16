#pragma once
#include <iostream>

class DrawBoard {
public:
	//chars for X and O
	char seven = '7';
	char eight = '8';
	char nine = '9';

	char four = '4';	// 7|8|9
	char five = '5';	// 4|5|6
	char six = '6';		// 1|2|3

	char one = '1';
	char two = '2';
	char three = '3';

	bool gameOn = true;
	int turn = 1;
	int winner;

	void getBoard();
	void evalChoice();
	void getCheckStatus();
private:
	void board();
	void checkStatus();
};