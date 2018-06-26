#ifndef NUMBER_H
#define NUMBER_H

#include<iostream>
#include<complex>

using namespace std;

class Number
{
private:
	double nx;

public:
	virtual void print();
	virtual Number add(const Number& other);
	virtual Number mul(const Number& other);
	Number(double r)
	{
		nx = r;
	}
	~Number(){}
};

void Number::print()
{}

Number Number::add(const Number& other)
{
	return other.nx + nx;
}

Number Number::mul(const Number& other)
{
	return other.nx * nx;
}

class RealNumber : public Number
{
private:
	double rx;

public:
	virtual void print();
	virtual RealNumber RealNumber::add(const RealNumber& other);
	virtual RealNumber RealNumber::mul(const RealNumber& other);
	RealNumber(double r) :Number(r)
	{
		rx = r;
	}
	~RealNumber(){}
};

void RealNumber::print()
{
	cout << rx << endl;
}

RealNumber RealNumber::add(const RealNumber& other)
{
	return other.rx + rx;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
	return other.rx * rx;
}

class IntegerNumber : public RealNumber
{
private:
	int ix;
public:
	virtual void print();
	virtual IntegerNumber IntegerNumber::add(const IntegerNumber& other);
	virtual IntegerNumber IntegerNumber::mul(const IntegerNumber& other);
	IntegerNumber(int i) :RealNumber(i)
	{
		ix = i;
	}
	~IntegerNumber(){}
};

void IntegerNumber::print()
{
	cout << ix << endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	return other.ix + ix;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	return other.ix * ix;
}

class ComplexNumber : public Number
{
private:
	double rrx;
	double iix;

public:
	virtual void print();
	virtual ComplexNumber ComplexNumber::add(const ComplexNumber& other);
	virtual ComplexNumber ComplexNumber::mul(const ComplexNumber& other);
	ComplexNumber(double r, double i) :Number(r)
	{
		rrx = r;
		iix = i;
	}
	~ComplexNumber(){}
};

void ComplexNumber::print()
{
	cout << rrx << "+" << iix << endl;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	return ComplexNumber(other.rrx + rrx, other.iix + iix);
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	return ComplexNumber(other.rrx * rrx, other.iix * iix);
}

#endif
