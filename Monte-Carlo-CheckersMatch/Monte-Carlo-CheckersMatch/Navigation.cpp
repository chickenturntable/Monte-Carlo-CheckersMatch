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
#include "Navigation.h"

using namespace std;

void Navigation::PrintMainMenuSelections()
{
	cout << "1) - " + playGameSelection << endl;
	cout << "2) - " + optionsSelection << endl;
	cout << "3) - " + helpSelection << endl;
	cout << "4) - " + infoSelection << endl;
	cout << "5) - " + exitSelection << endl;
}

void Navigation::PrintMainMenu(string version)
{
	PrintApplicationTitle(version);
	PrintMainMenuTitle();
	PrintMainMenuSelections();
}

void Navigation::PrintApplicationTitle(string version)
{
	system("cls");
	cout << border << endl;
	cout << title << " - " << version << endl;
	cout << border << endl;
}

void Navigation::PrintMainMenuTitle()
{
	cout << mainMenuTitle << endl << endl;
}

void Navigation::PrintHelpMenuTitle()
{
	cout << helpMenuTitle << endl << endl;
}

void Navigation::PrintInfoMenuTitle()
{
	cout << infoMenuTitle << endl << endl;
}

void Navigation::PrintGameSetupTitle()
{
	cout << gameSetupTitle << endl << endl;
}

void Navigation::PrintNavigationInstructions()
{
	cout << "Select an option:" << endl;
}

char Navigation::GetUserInput()
{
	char input;

	cout << endl << "> ";
	cin >> input;
	return input;
}