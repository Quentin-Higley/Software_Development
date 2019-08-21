#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	char charChoice;
	

	do
	{
		cout << "A\tAddition\n";
		cout << "S\tSubtract\n";
		cout << "M\tMultiply\n";
		cout << "D\tDivision\n";
		cout << "E\tExit\n";

		cout << "\nChoice\n";

		cin >> charChoice;
		cin.ignore();

		fraction first;
		fraction second;
		fraction output;

		cin >> first;
		cin >> second;

		switch (charChoice)
		{
			case 'A':
			case'a':
				output = first + second;
				cout << output;
				break;

			case 'S':
			case's': 
				output = first - second;
				cout << output;
				break;

			case 'M':
			case'm':
				output = first * second;
				cout << output;
				break;

			case 'D':
			case'd':
				output = first / second;
				cout << output;
				break;

			case 'E':
			case'e':
				break;

			default : 
				cerr << "Error, Unrecognized choice: " << charChoice << endl;
				break;
		}
		cout << endl;
	} 
	while (charChoice != 'e' && charChoice != 'E');

	return 0;
}