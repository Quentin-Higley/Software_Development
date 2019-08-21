#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() 
{
	srand((unsigned)time(NULL));
	int intNumber;
	while (true)
	{
		intNumber = rand() % 100;
		cout << "Enter a number between 0 - 99, anything less than one will end the game!" << endl;
		while (true)
		{
			cout << "Enter a number: ";
			int intGuess;
			cin >> intGuess;
			if (intGuess < 0)
			{
				exit(0);
			}
			else if (intGuess > intNumber) 
			{
				cout << "Too high!" << endl;
			}
			else if (intGuess < intNumber)
			{
				cout << "Too low!" << endl;
			}
			else
			{
				cout << "You win!" << endl;
				break;
			}
		}
	}
}