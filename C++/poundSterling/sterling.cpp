#include <iostream>
#include "sterling.h"
#include <iomanip>

using namespace std;

sterling make_sterling(int intP, int intS, int intPe)
{
	sterling threeIn;

	threeIn.intPound = intP;
	threeIn.intShilling = intS;
	threeIn.intPence = intPe;

	return threeIn;
}

sterling make_sterling(int penceOnly)
{
	sterling oneIn;

	oneIn.intPound = penceOnly / 240;
	penceOnly %= 240;

	oneIn.intShilling = penceOnly / 12;
	penceOnly %= 12;

	oneIn.intPence = penceOnly;

	return oneIn;
}

sterling add(sterling ster1, sterling ster2)
{
	int intOut1, intOut2;
	
	intOut1 = ster1.intPound * 240 + ster1.intShilling * 12 + ster1.intPence;
	intOut2 = ster2.intPound * 240 + ster2.intShilling * 12 + ster2.intPence;

	return make_sterling(intOut1 + intOut2);
}

void print(sterling& Output)
{
	cout << (char)156 << Output.intPound << "." << setw(2)<< setfill('0') << Output.intShilling << "." << setw(2) << setfill('0') << Output.intPence << endl;
}

void read(sterling* Input) 
{

	cout << "please enter Pounds: \t";
	cin >> Input->intPound;
	cout << endl;

	cout << "please enter Shilling: \t";
	cin >> Input->intShilling;
	cout << endl;

	cout << "please enter Pence: \t";
	cin >> Input->intPence;
	cout << endl;
}