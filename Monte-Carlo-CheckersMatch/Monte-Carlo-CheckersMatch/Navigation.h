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
	// App Version
	string version;

	// GUI Resources
	string border = "*****************************************************************************************";
	string title = "Monte-Carlo Checkers Match";
	string mainMenuTitle = "MAIN MENU";
	string gamePlayTitle = "PLAY GAME";
	string optionsTitle = "CUSTOMIZE EXPERIENCE";
	string helpMenuTitle = "ASSITANCE";
	string aboutMenuTitle = "ABOUT";
	string navigationInstructions = "Type the corrosponding number to select an option:";
	map<string, int> colorChoices;

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
	Navigation();
	Navigation(string);

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

	// OPTIONS MENU GUI:
	void PrintOptionsMenu();
	void PrintOptionMenuSelections();
	void PrintCustomizableOptions();
	void PrintOptionsTitle();

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
	int GetRandomPath();
	void PrintNavigationInstructions();
	char GetUserInput();
};