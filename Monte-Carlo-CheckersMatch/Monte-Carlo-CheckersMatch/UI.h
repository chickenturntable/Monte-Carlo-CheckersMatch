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

class UI {

private:
	// App Version
	string version;

	// GUI Resources
	map<char, string> colorChoicesMap;
	string border = "*****************************************************************************************";
	string title = "Monte-Carlo Checkers Match";
	string mainMenuTitle = "MAIN MENU";
	string gamePlayTitle = "PLAY GAME";
	string optionsTitle = "CUSTOMIZE EXPERIENCE";
	string helpMenuTitle = "ASSITANCE";
	string aboutMenuTitle = "ABOUT";
	string UIInstructions = "Type the corrosponding number to select an option:";
	vector<string> colors = {
		 "Black"
		,"Blue"
		,"Green"
		,"Aqua"
		,"Red"
		,"Purple"
		,"Yellow"
		,"White"
		,"Gray"
		,"Light Blue"
		,"Light Green"
		,"Light Aqua"
		,"Light Red"
		,"Light Purple"
		,"Light Yellow"
		,"Bright White" };

	// Menu Content
	string playGameSelection = "Play Game";
	string optionsSelection = "Options";
	string helpSelection = "Help";
	string aboutSelection = "About";
	string exitSelection = "Exit";
	string backSelection = "Back";

	// Options Menu Content
	string backgroundColorSelection = "Select Background Color";
	string textColorSelection = "Select Text Color";
	string textColor;
	string backgroundColor;

public:
	// CONSTRUCTORS:
	UI();
	UI(string);
	UI(string, char);
	UI(string, char, char);

	// Getters/Setters


	// APPLICATION HEADER GUI:
	void PrintApplicationTitle();

	// MAIN MENU GUI:
	void PrintMainMenu();
	void PrintMainMenuTitle();
	void PrintMainMenuSelections();

	// GAME PLAY GUI:
	void PrintPlayGameMenu();
	void PrintPlayGameTitle();
	void PrintPlayGameMenuSelections();
	void PrintGameBoard(vector<vector<char>>);

	// OPTIONS MENU GUI:
	void PrintOptionsMenu();
	void PrintOptionMenuSelections();
	void PrintCustomizableOptions();
	void PrintOptionsTitle();
	void ChangeBackgroundColor(char);
	void ChangeTextColor(char);
	void PrintColorOptions();

	// HELP MENU GUI
	void PrintHelpMenu();
	void PrintHelpMenuTitle();
	void PrintHelpMenuSelections();

	// ABOUT MENU GUI
	void PrintAboutMenu();
	void PrintAboutMenuTitle();
	void PrintAboutMenuSelections();

	// GENERAL GUI RESOURCES
	void InitializeColorMap();
	void InitializeStartingColors(char backgroundColor = '0', char textColor = 'F');
	int GetRandomPath();
	void PrintUIInstructions();
	char GetUserInput();
};