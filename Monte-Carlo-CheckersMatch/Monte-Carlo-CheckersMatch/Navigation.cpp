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
#include "Navigation.h"

using namespace std;

/********************************************************************************************************
-------------------------------------------- CONSTRUCTORS -----------------------------------------------
*********************************************************************************************************/
Navigation::Navigation() {
	this->version = "UNKNOWN";
}

Navigation::Navigation(string version) {
	this->version = version;
}

/********************************************************************************************************
------------------------------------------- APPLICATION HEADER ------------------------------------------
*********************************************************************************************************/
void Navigation::PrintApplicationTitle()
{
	cout << border << endl;
	cout << title << " - " << version << endl;
	cout << border << endl;
}

/********************************************************************************************************
--------------------------------------------- MAIN MENU GUI ---------------------------------------------
*********************************************************************************************************/
void Navigation::PrintMainMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintMainMenuTitle();
	cout << endl;
	PrintNavigationInstructions();
	cout << endl;
	PrintMainMenuSelections();
}

void Navigation::PrintMainMenuTitle()
{
	cout << mainMenuTitle << endl;
}

void Navigation::PrintMainMenuSelections()
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
void Navigation::PrintPlayGameMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintPlayGameTitle();
	cout << endl;
	PrintPlayGameMenuSelections();
}

void Navigation::PrintPlayGameTitle()
{
	cout << gamePlayTitle << endl;
}

void Navigation::PrintPlayGameMenuSelections()
{
	cout << "1) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- OPTIONS MENU GUI ------------------------------------------
*********************************************************************************************************/
void Navigation::PrintOptionsMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintOptionsTitle();
	cout << endl;
	PrintNavigationInstructions();
	cout << endl;
	PrintOptionMenuSelections();
}

void Navigation::PrintOptionsTitle()
{
	cout << optionsTitle << endl;
}

void Navigation::PrintOptionMenuSelections()
{
	cout << "1) - " + backgroundColorSelection << endl;
	cout << "2) - " + textColorSelection << endl;
	cout << "3) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- HELP MENU GUI ---------------------------------------------
*********************************************************************************************************/
void Navigation::PrintHelpMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintHelpMenuTitle();
	cout << endl;
	PrintNavigationInstructions();
	cout << endl;
	PrintHelpMenuSelections();
}

void Navigation::PrintHelpMenuTitle()
{
	cout << helpMenuTitle << endl;
}

void Navigation::PrintHelpMenuSelections()
{
	cout << "1) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- ABOUT MENU GUI --------------------------------------------
*********************************************************************************************************/
void Navigation::PrintAboutMenu()
{
	system("cls");
	PrintApplicationTitle();
	PrintAboutMenuTitle();
	cout << endl;
	PrintNavigationInstructions();
	cout << endl;
	PrintAboutMenuSelections();
}

void Navigation::PrintAboutMenuTitle()
{
	cout << aboutMenuTitle << endl;
}

void Navigation::PrintAboutMenuSelections()
{
	cout << "1) - " + backSelection << endl;
}

/********************************************************************************************************
--------------------------------------------- EXIT MENU GUI ---------------------------------------------
*********************************************************************************************************/

/********************************************************************************************************
------------------------------------------ GENERAL GUI RESOURCES ----------------------------------------
*********************************************************************************************************/
void Navigation::PrintNavigationInstructions()
{
	cout << navigationInstructions << endl;
}

char Navigation::GetUserInput()
{
	char input;
	cout << endl << "> ";
	cin >> input;
	return input;
}