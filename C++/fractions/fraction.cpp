#include <iostream>
#include "fraction.h"

using namespace std;

fraction fraction::add(fraction fPass)
{
	int intNumerator = 0;
	int intDenominator = 0;

	cout << "adding..." << endl;
	intNumerator = numerator * fPass.denominator + fPass.numerator * denominator;
	intDenominator = fPass.denominator * denominator;
	return fraction(intNumerator, intDenominator);
}

fraction fraction::sub(fraction fPass)
{
	int intNumerator = 0;
	int intDenominator = 0;
	cout << "subtracting..." << endl;
	intNumerator = numerator * fPass.denominator - fPass.numerator * denominator;
	intDenominator = fPass.denominator * denominator;
	return fraction(intNumerator, intDenominator);
}

fraction fraction::mult(fraction fPass)
{
	cout << "multiplying..." << endl;
	int intNumerator = 0;
	int intDenominator = 0;	
	
	intNumerator = numerator * fPass.numerator;
	intDenominator = denominator * fPass.denominator;
	return fraction(intNumerator, intDenominator);
}

fraction fraction::div(fraction fPass)
{
	cout << "dividing..." << endl;

	int intNumerator = 0;
	int intDenominator = 0;

	intNumerator =  denominator * fPass.numerator;
	intDenominator = numerator * fPass.denominator;
	return fraction(intNumerator, intDenominator);
}

void fraction::print()
{
		cout << "printing..." << endl;
		cout << numerator << " / " << denominator << endl;
}

void fraction::read()
{
	cout << "enter the numerator:" << endl;
	cin >> numerator;

	cout << "enter the demonator:" << endl;
	cin >> denominator;
}

int gcd(int u, int v)
{
	u = (u < 0) ? -u : u;			// make u non-negative
	v = (v < 0) ? -v : v;			// make v non-negative

	while (u > 0)
	{
		if (u < v)
		{
			int t = u;	// swap u and v
			u = v;
			v = t;
		}
		u -= v;
	}

	return v;				// the GCD of u and v
}