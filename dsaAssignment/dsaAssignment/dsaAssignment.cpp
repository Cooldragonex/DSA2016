// DSAAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void displayMenu()
{
	cout << "\n\n---------------- Genealogy Tree Menu -------------------" << endl;
	cout << "[1] Add genealogical data of individual in a family tree" << endl;
	cout << "[2] Search genelogical data of individual in a family tree" << endl;
	cout << "[3] Display the children of individual selected by user" << endl;
	cout << "[4] Able to complete family tree" << endl;
	cout << "[0] Exit" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "Enter your option: ";
}

int _tmain(int argc, _TCHAR* argv[])
{
	int userInput = 0;
	do {

		// call  displayMenu function
		displayMenu();

		// capture user's choice input
		cin >> userInput;

		switch (userInput)
		{
		case 1:
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 0: cout << "\nExiting this program... Have a nice day! \n" << endl;
			break;

		default: cout << "\nInvalid Input Entry." << endl;
		}
	} while (userInput != 0);


	system("PAUSE");
	return 0;
};
