#pragma once

#include <iostream>
#include <string>
#include "Date.h"
#include "Address.h"
using namespace std;

class Employee
{
private:
	string name;
	Date moment;
	Address* addr;
public:
	Employee(string a_name, int a_year, int a_month, int a_day) : moment(a_year, a_month, a_day), addr(nullptr), name(a_name){}
	
	~Employee()
	{
		if (addr != nullptr)
			delete addr;
	}

	void setAddress(string a_street, string a_city)
	{
		if (addr != nullptr)
			delete addr;
		addr = new Address(a_street, a_city);
	}

	void display()
	{
		cout << name << endl;
		moment.display();
		if (addr != nullptr)
			addr->display();
	}

	friend ostream& operator<<(ostream& out, Employee& me)
	{
		out << me.name << endl;
		out << me.moment << endl;
		if (me.addr != nullptr)
			out << *me.addr;
		return out;
	}

};