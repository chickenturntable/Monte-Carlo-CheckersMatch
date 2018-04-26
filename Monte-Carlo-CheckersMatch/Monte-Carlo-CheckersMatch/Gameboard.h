#pragma once
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

using namespace std;

class Gameboard {

private:
	int BOARD_SIZE = 8;
	char EMPTY_SPACE = '*';

	vector<vector<char>> gameBoard;

public:
	Gameboard();
	Gameboard(vector<vector<char>>);
	char getEmptySpaceChar();
	int getBoardSize();
	void PrintGameBoard();
	void InitializeGameBoard();
	void InitializeGameBoard(vector<vector<char>>&);
	vector<vector<char>> getGameBoard();
};