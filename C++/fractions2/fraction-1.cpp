#include <iostream>
#include "fraction.h"

using namespace std;

fraction operator+(fraction f1, fraction f2)
{
	int intNumerator = 0;
	int intDenominator = 0;

	cout << "adding..." << endl;
	intNumerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	intDenominator = f1.denominator * f2.denominator;
	return fraction(intNumerator, intDenominator);
}

fraction operator-(fraction f1, fraction f2)
{
	int intNumerator = 0;
	int intDenominator = 0;
	cout << "subtracting..." << endl;
	intNumerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
	intDenominator = f2.denominator * f1.denominator;
	return fraction(intNumerator, intDenominator);
}

fraction operator*(fraction f1, fraction f2)
{
	cout << "multiplying..." << endl;
	int intNumerator = 0;
	int intDenominator = 0;	
	
	intNumerator = f1.numerator * f2.numerator;
	intDenominator = f1.denominator * f2.denominator;
	return fraction(intNumerator, intDenominator);
}

fraction operator/(fraction f1, fraction f2)
{
	cout << "dividing..." << endl;

	int intNumerator = 0;
	int intDenominator = 0;

	intNumerator =  f1.denominator * f2.numerator;
	intDenominator = f1.numerator * f2.denominator;
	return fraction(intNumerator, intDenominator);
}

ostream& operator<<(ostream& out, fraction& f)
{
		cout << "printing..." << endl;
		out << f.numerator << " / " << f.denominator << endl;

		return out;
}

istream& operator>>(istream& in, fraction& f)
{
	cout << "enter the numerator:" << endl;
	cin >> f.numerator;

	cout << "enter the demonator:" << endl;
	cin >> f.denominator;
	return in;
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


