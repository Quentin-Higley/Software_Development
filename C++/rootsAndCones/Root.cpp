#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
		double dblA, dblB, dblC, dblAnswer;

		cout << "Please enter A" << endl;
		cin >> dblA;

		cout << "Please enter B" << endl;
		cin >> dblB;

		cout << "Please enter C" << endl;
		cin >> dblC;

		dblAnswer = (-dblB + (sqrt(pow(dblB, 2.0) - (4.0 * dblA * dblC)))) / (2.0 * dblA);
		cout << "X1 = " << dblAnswer << endl;
		dblAnswer = (-dblB - (sqrt(pow(dblB, 2.0) - (4.0 * dblA * dblC)))) / (2.0 * dblA);
		cout << "X2 = " << dblAnswer << endl;

}