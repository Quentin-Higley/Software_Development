#include <fstream>
#include <cstring>
#include <string>
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(2);
	string strInput;

	cout << "enter a file path" << endl;
	getline(cin, strInput);
	int intL = strInput.length();

	ifstream fileInput;
	fileInput.open(strInput);
	if (!fileInput.good())
	{
		cerr << "unable to open file path" << endl;
		system("pause");
		exit(1);
	}

	double dblNum = 0.0;

	cout << setw(79) << setfill('-')  << "\t" << endl;

	while (!fileInput.eof())
	{
		bool isPos = false;
		double dblTemp = 0.0;

		char charTN[20];
		fileInput.getline(charTN, 20, ':');
		if (strchr(charTN, 'd'))
			isPos = true;
		cout << left << setfill(' ') << setw(20)  << charTN;

		char charDate[20];
		fileInput.getline(charDate, 20, ':');
		cout << setw(20) << charDate;


		char charPlace[20];
		fileInput.getline(charPlace, 20, ':');
		cout << setw(20) << charPlace;

		fileInput >> dblTemp;
		cout << right << "$"  << setw(17) << dblTemp << endl;
		fileInput.ignore();

		if (isPos == false)
			dblTemp *= -1;

		dblNum += dblTemp;
	}

	cout << setw(79) << setfill('-') << "\t" << endl;


	cout << setfill(' ') << setw(61) << "Balance: $";
	cout << setw(17) << right << dblNum << endl;

	system("pause");


	return 0;
}