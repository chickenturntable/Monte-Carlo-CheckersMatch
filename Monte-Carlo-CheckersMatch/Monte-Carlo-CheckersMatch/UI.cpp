/********************************************************************************************************
------------------------------------------- PROGRAM INFO ------------------------------------------------
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
#include "UI.h"

using namespace std;

/********************************************************************************************************
-------------------------------------------- CONSTRUCTORS -----------------------------------------------
*********************************************************************************************************/
UI::UI() {
	InitializeStartingColors();
	this->version = "UNKNOWN";
}

UI::UI(string version) {
	InitializeStartingColors();
	this->version = version;
}

UI::UI(string version, char backgroundColor) {
	InitializeStartingColors(backgroundColor);
	this->version = version;
}

UI::UI(string version, char backgroundColor, char textColor) {
	InitializeStartingColors(backgroundColor, textColor);
	this->version = version;
}

/********************************************************************************************************
------------------------------------------- APPLICATION HEADER ------------------------------------------
*********************************************************************************************************/
void UI::PrintApplicationTitle()
{
	cout << border << endl;
	cout << title << " - " << version << endl;
	cout << border << endl;
}

/********************************************************************************************************
--------------------------------------------- MAIN MENU GUI ---------------------------------------------
*********************************************************************************************************/
void UI::PrintMainMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintMainMenuTitle();
	cout << endl;
	PrintUIInstructions();
	cout << endl;
	PrintMainMenuSelections();
}

void UI::PrintMainMenuTitle()
{
	cout << mainMenuTitle << endl;
}

void UI::PrintMainMenuSelections()
{
	cout << "1) - " + playGameSelection << endl;
	cout << "2) - " + optionsSelection << endl;
	cout << "3) - " + helpSelection << endl;
	cout << "4) - " + aboutSelection << endl;
	cout << "5) - " + exitSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- PLAY GAME MENU GUI ----------------------------------------
*********************************************************************************************************/
void UI::PrintPlayGameMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintPlayGameTitle();
	cout << endl;
	PrintPlayGameMenuSelections();
}

void UI::PrintPlayGameTitle()
{
	cout << gamePlayTitle << endl;
}

void UI::PrintPlayGameMenuSelections()
{
	cout << "1) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- OPTIONS MENU GUI ------------------------------------------
*********************************************************************************************************/
void UI::PrintOptionsMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintOptionsTitle();
	cout << endl;
	PrintUIInstructions();
	cout << endl;
	PrintOptionMenuSelections();
}

void UI::PrintOptionsTitle()
{
	cout << optionsTitle << endl;
}

void UI::ChangeBackgroundColor(char val)
{
	string systemCommand = colorChoicesMap[val];
	const char * command = systemCommand.c_str();
	system(command);
}

void UI::ChangeTextColor(char val)
{
	string systemCommand = colorChoicesMap[val];
	const char * command = systemCommand.c_str();
	system(command);
}

void UI::PrintColorOptions()
{
	char* userReference = NULL;
	char buffer;
	for (int i = 0; i < colors.size(); i++) {
		if (i > 9) {
			*userReference = (i == 10) ? 'A' :
							(i == 11) ? 'B' :
							(i == 11) ? 'C' :
							(i == 11) ? 'D' :
							(i == 11) ? 'E' : 'F';
		}
		else {
			*userReference = i;
		}
		cout << *userReference << colors[i] << endl;
	}
}

void UI::PrintOptionMenuSelections()
{
	cout << "1) - " + backgroundColorSelection << endl;
	cout << "2) - " + textColorSelection << endl;
	cout << "3) - " + backSelection << endl;
}

void UI::PrintCustomizableOptions()
{
	
}

void UI::InitializeColorMap()
{
	/*************************
	0 = Black
	1 = Blue
	2 = Green
	3 = Aqua
	4 = Red
	5 = Purple
	6 = Yellow
	7 = White
	8 = Gray
	9 = Light Blue
	A = Light Green
	B = Light Aqua
	C = Light Red
	D = Light Purple
	E = Light Yellow
	F = Bright White
	**************************/

	colorChoicesMap.insert(make_pair('0', "COLOR 0"));
	colorChoicesMap.insert(make_pair('1', "COLOR 1"));
	colorChoicesMap.insert(make_pair('2', "COLOR 2"));
	colorChoicesMap.insert(make_pair('3', "COLOR 3"));
	colorChoicesMap.insert(make_pair('4', "COLOR 4"));
	colorChoicesMap.insert(make_pair('5', "COLOR 5"));
	colorChoicesMap.insert(make_pair('6', "COLOR 6"));
	colorChoicesMap.insert(make_pair('7', "COLOR 7"));
	colorChoicesMap.insert(make_pair('8', "COLOR 8"));
	colorChoicesMap.insert(make_pair('9', "COLOR 9"));
	colorChoicesMap.insert(make_pair('A', "COLOR A"));
	colorChoicesMap.insert(make_pair('B', "COLOR B"));
	colorChoicesMap.insert(make_pair('C', "COLOR C"));
	colorChoicesMap.insert(make_pair('D', "COLOR D"));
	colorChoicesMap.insert(make_pair('E', "COLOR E"));
	colorChoicesMap.insert(make_pair('F', "COLOR F"));
}

/********************************************************************************************************
--------------------------------------------- HELP MENU GUI ---------------------------------------------
*********************************************************************************************************/
void UI::PrintHelpMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintHelpMenuTitle();
	cout << endl;
	PrintUIInstructions();
	cout << endl;
	PrintHelpMenuSelections();
}

void UI::PrintHelpMenuTitle()
{
	cout << helpMenuTitle << endl;
}

void UI::PrintHelpMenuSelections()
{
	cout << "1) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- ABOUT MENU GUI --------------------------------------------
*********************************************************************************************************/
void UI::PrintAboutMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintAboutMenuTitle();
	cout << endl;
	PrintUIInstructions();
	cout << endl;
	PrintAboutMenuSelections();
}

void UI::PrintAboutMenuTitle()
{
	cout << aboutMenuTitle << endl;
}

void UI::PrintAboutMenuSelections()
{
	cout << "1) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- EXIT MENU GUI ---------------------------------------------
*********************************************************************************************************/

/********************************************************************************************************
------------------------------------------ GENERAL GUI RESOURCES ----------------------------------------
*********************************************************************************************************/

void UI::InitializeStartingColors(char backgroundColor, char textColor)
{
	this->backgroundColor = backgroundColor;
	this->textColor = textColor;
}

int UI::GetRandomPath()
{  
	int randomNumber = 0;
	/* initialize random seed: */
	srand(time_t(NULL));

	/* generate secret number between 1 and 10: */
	randomNumber = rand() % 1 + 0;
	return randomNumber;
}

void UI::PrintUIInstructions()
{
	cout << UIInstructions << endl;
}

char UI::GetUserInput()
{
	char input;
	cout << endl << "> ";
	cin >> input;
	return toupper(input);
}

void UI::PrintGameBoard(vector<vector<char>> gameBoard)
{
	for (int r = 0; r < gameBoard.size(); r++) {
		for (int c = 0; c < gameBoard.size(); c++) {
			cout << gameBoard[r][c];
		}
		cout << endl;
	}
}