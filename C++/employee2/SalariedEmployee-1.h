#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee
{
private:

	double salary;

public:

	SalariedEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary) : Employee(a_name, a_year, a_month, a_day), salary(a_salary){}

	virtual double calcPay()
	{
		double dblOutput = 0.0;
		dblOutput = salary / 24;
		return dblOutput;
	}

	virtual void display()
	{
		Employee::display();
		cout << salary << endl;
		cout << calcPay() << endl;
	}

	friend ostream& operator<< (ostream& out, SalariedEmployee& me)
	{
		out << (Employee &)me << " " << me.salary << endl;
		return out;
	}

};