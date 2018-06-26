}
#include "stdafx.h"
#include"number.h"
	using namespace std;


int main()
{
	double r1, r2;
	cout << "Please enter two real numbers:" << endl;
	cin >> r1 >> r2;
	RealNumber r(r1);
	RealNumber e(r2);
	RealNumber a = r.add(e);
	RealNumber b = r.mul(e);
	cout << "The sum is:";
	a.print();
	cout << "The product is:";
	b.print();

	int i1, i2;
	cout << "Please enter two integer numbers:" << endl;
	cin >> i1 >> i2;
	IntegerNumber i(i1);
	IntegerNumber n(i2);
	IntegerNumber c = i.add(n);
	IntegerNumber d = i.mul(n);
	cout << "The sum is:";
	c.print();
	cout << "The product is:";
	d.print();

	double cc, o, m, p;
	cout << "Please enter the real part and imaginary part of the first complex number:" << endl;
	cin >> cc >> o;
	cout << "Please enter the real part and imaginary part of the second complex number:" << endl;
	cin >> m >> p;
	ComplexNumber ee(cc, o);
	ComplexNumber ff(m, p);
	ComplexNumber g = ee.add(ff);
	ComplexNumber h = ee.mul(ff);
	cout << "The sum is:";
	g.print();
	cout << "The product is:";
	h.print();

	return 0;
	}
