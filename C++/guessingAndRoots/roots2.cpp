#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double dblA, dblB, dblC, dblX1, dblX2;
	
	cout << "Please enter A" << endl;
	cin >> dblA;
	if (dblA == 0)
		exit(0);

	cout << "Please enter B" << endl;
	cin >> dblB;

	cout << "Please enter C" << endl;
	cin >> dblC;

	double dblTest = pow(dblB, 2.0) - (4.0 * dblA * dblC);

	if (dblTest >= 0.0)
	{
		dblX1 = (-dblB + (sqrt(pow(dblB, 2.0) - (4.0 * dblA * dblC)))) / (2.0 * dblA);

		dblX2 = (-dblB - (sqrt(pow(dblB, 2.0) - (4.0 * dblA * dblC)))) / (2.0 * dblA);

		cout << "X1 = " << dblX1 << endl;
		cout << "X2 = " << dblX2 << endl;
	}
	else if (dblTest <= 0.0)
	{
		dblTest = sqrt(dblTest * -1) / (2 * dblA);
		cout << "X1 = " << -dblB / (2 * dblA) << " + " << dblTest << "i" << endl;
		cout << "X2 = " << -dblB / (2 * dblA) << " - " << dblTest << "i" << endl;
	}
	system("pause");
}