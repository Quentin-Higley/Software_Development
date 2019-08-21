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
		fraction denominator;

		switch (charChoice)
		{
			case 'A':
			case'a':

				first.read();
				second.read();

				denominator = first.add(second);

				denominator.print();
				break;

			case 'S':
			case's':
				
				

				first.read();
				second.read();

				denominator = first.sub(second);
				denominator.print();
				break;

			case 'M':
			case'm':
				first.read();
				second.read();

				denominator = first.mult(second);
				denominator.print();
				break;

			case 'D':
			case'd':
				first.read();
				second.read();

				denominator = first.div(second);
				denominator.print();
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