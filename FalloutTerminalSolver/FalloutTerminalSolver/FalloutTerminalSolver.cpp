// FalloutTerminalSolver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MainFunctions.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "\tWelcome to the Fallout Terminal Solver\n\nSelect an option:" << endl;
	int PlayerChoice;
	PlayerChoice = Menu();
	switch (PlayerChoice)
	{
	default:
		break;
	case(1):
		cout << "\nOption 1 selected" << endl;
		break;
	case(2) :
		cout << "\nOption 2 selected" << endl;
		break;
	case(3) :
		cout << "\nOption 3 selected" << endl;
		break;
	case(4) :
		cout << "\nOption 4 selected" << endl;
		break;
	}
	return 0;
}

int Menu()
{
	cout << "\n1. Add word to list\n2. View most likely choices\n3. Clear choices\n4. Quit" << endl;
	int Choice;
	cin >> Choice;
	return Choice;
}