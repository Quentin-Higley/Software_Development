#pragma once
struct sterling
{
	int intPound;
	int intShilling;
	int intPence;
};

sterling make_sterling(int, int, int);

sterling make_sterling(int);

sterling add(sterling, sterling);

void print(sterling&);

void read(sterling*);