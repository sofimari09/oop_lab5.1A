#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Exception.h"
using namespace std;

class Number
{
private:
	double first;
	double second;
public:
	Number(double, double);

	Number();

	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(double value);


	Number& operator =(const Number&);
	operator string() const;

	friend ostream& operator <<(ostream& out, const Number& a);
	friend istream& operator >>(istream& in, Number& a) throw(const char*, bad_exception&);

	void multiply(double N);

};

