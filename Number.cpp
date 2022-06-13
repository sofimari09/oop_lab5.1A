#include "Number.h"
#include <iostream>
#include <cmath>
#include <string>
#include "Exception.h"

using namespace std;

Number::Number() {
	first = 0;
	second = 0;
}

Number::Number(double x = 0, double y = 0) {
	this->first = x;
	this->second = y;
}

void Number::SetFirst(double value)
{
	first = floor(value);
}

void Number::SetSecond(double value1)
{
	second = value1;
}

Number& Number::operator = (const Number& r)
{
	first = r.first;
	second = r.second;
	return *this;
}

Number::operator string () const
{
	stringstream ss;
	ss << "first = " << first << endl;
	ss << "second = " << second << endl;
	return ss.str();
}


ostream& operator << (ostream& out, const Number& a)
{
	return out <<  a.first << ", " << a.second ;
}

istream& operator >> (istream& in, Number& a) throw(const char*, bad_exception&)
{
	cout << "first = "; in >> a.first;

	cout << "second = "; in >> a.second;
	if (a.second < 0 )
		throw bad_exception();
	return in;
}



void Number::multiply(double N)
{
	first *= N;
	second *= N;
}
