/********************************************************************************************************
Author: Samuel A. Cobb
Description:
*********************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
#include <map>
#include <stack>
#include <array>
#include <list>
#include <math.h>
#include <ctime>
#include <random>
#include <ctime>
#include <iomanip>
#include "Gameboard.h"

using namespace std;

Gameboard::Gameboard()
{
	InitializeGameBoard();
}

Gameboard::Gameboard(vector<vector<char>> gameBoard)
{
	InitializeGameBoard(gameBoard);
}

char Gameboard::getEmptySpaceChar()
{
	return EMPTY_SPACE;
}

void Gameboard::InitializeGameBoard()
{
	gameBoard.resize(BOARD_SIZE, vector<char>(BOARD_SIZE, getEmptySpaceChar()));
}

void Gameboard::InitializeGameBoard(vector<vector<char>>& gameBoard)
{
	gameBoard.resize(BOARD_SIZE, vector<char>(BOARD_SIZE, ' '));
}

vector<vector<char>> Gameboard::getGameBoard()
{
	return gameBoard;
}

int Gameboard::getBoardSize()
{
	return BOARD_SIZE;
}

void Gameboard::PrintGameBoard()
{
	for (int r = 0; r < BOARD_SIZE; r++) {
		for (int c = 0; c < BOARD_SIZE; c++) {
			cout << gameBoard[r][c];
		}
		cout << endl;
	}
}