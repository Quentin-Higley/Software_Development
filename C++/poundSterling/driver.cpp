#include <iostream>
#include "sterling.h"
using namespace std;

int main()
{
	cout << "please enter the first to be formatted," << endl;
	sterling formatOne;
	read(&formatOne);
	print(formatOne);
	cout << "the first has been formatted." << endl << endl;

	cout << "please enter the second to be formated," << endl;
	sterling formatTwo;
	read(&formatTwo);
	print(formatTwo);
	cout << "the second has been formatted." << endl << endl;

	cout << "they will now be added together." << endl;
	sterling added = add(formatOne, formatTwo);
	print(added);
	cout << "process complete." << endl << endl;

	

	system("pause");
}