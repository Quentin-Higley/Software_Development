#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class WagedEmployee : public Employee
{
private:
	double wage;
	double hours;
public:
	WagedEmployee(string a_name, int a_year, int a_month, int a_day, double a_wage, double a_hours) : Employee(a_name, a_year, a_month, a_day), hours(a_hours), wage(a_wage){}

	virtual double calcPay()
	{
		double dblOutput = 0.0;
		dblOutput = wage * hours;
		return dblOutput;
	}

	virtual void display()
	{
		Employee::display();
		cout << wage << endl;
		cout << hours << endl;
		cout << calcPay() << endl;
	}
	friend ostream& operator<< (ostream& out, WagedEmployee& me)
	{
		out << (Employee &)me << me.wage << me.hours << endl;
		return out;
	}

};