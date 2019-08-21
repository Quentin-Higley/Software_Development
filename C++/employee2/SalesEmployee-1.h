#pragma once
#pragma once
#include <iostream>
#include <string>
#include "SalariedEmployee.h"
using namespace std;

class SalesEmployee : public SalariedEmployee
{
private:
	double commission;
	double sales;
public:
	SalesEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary, double a_commission, double a_sales) : SalariedEmployee(a_name, a_year, a_month, a_day, a_salary) ,commission(a_commission), sales(a_sales){}

	virtual double calcPay()
	{
		double dblSalary = 0.0;
		dblSalary = SalariedEmployee::calcPay();
		dblSalary += commission * sales;

		return dblSalary;
	}

	virtual void display()
	{
		SalariedEmployee::display();
		cout << commission << endl;
		cout << sales << endl;
		cout << calcPay() << endl;
	}

	friend ostream& operator<< (ostream& out, SalesEmployee& me)
	{
		out << (SalariedEmployee &)me << me.commission << me.sales << endl;
		return out;
	}

};