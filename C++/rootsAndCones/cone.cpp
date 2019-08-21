#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double dblV, dblS, dblR,dblH;

	cout << "Please enter r" << endl;
	cin >> dblR;
	cout << "Please enter h" << endl;
	cin >> dblH;

	const double dblThird = 1.0 / 3.0;
	dblV = pow(dblR, 2) * dblThird * dblH * M_PI;
	cout << "X1 = " << dblV << endl;

	dblS = sqrt(pow(dblR, 2) + pow(dblH, 2)) * M_PI * dblR + (pow(dblR, 2) * M_PI);
	cout << "X2 = " << dblS << endl;

}