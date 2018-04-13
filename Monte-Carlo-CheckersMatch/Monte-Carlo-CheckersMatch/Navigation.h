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

class Navigation {

private:
	string border = "*****************************************************************************************";
	string title = "Monte-Carlo Checkers Match";
	string mainMenuTitle = "MAIN MENU";
	string helpMenuTitle = "HELP";
	string infoMenuTitle = "INFO";
	string gameSetupTitle = "GAME SETUP";

	// Main Menu Options
	string playGameSelection = "Play Game";
	string optionsSelection = "Options";
	string helpSelection = "Help";
	string infoSelection = "About";
	string exitSelection = "Exit";


public:
	void PrintApplicationTitle(string);
	void PrintMainMenuSelections();
	void PrintMainMenu(string);
	void PrintMainMenuTitle();
	void PrintHelpMenuTitle();
	void PrintInfoMenuTitle();
	void PrintGameSetupTitle();
	void PrintNavigationInstructions();
	char GetUserInput();
};