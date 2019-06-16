#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction f1(11, -3);
	Fraction f2(3, 2);
	
	cout << "f2 = ";
	(f2).Show();
	cout << "++f2 = ";
	(++f2).Show();
	cout << "f2++ = ";
	(f2++).Show();
	cout << "f2 = ";
	(f2).Show();
	cout << "--f2 = ";
	(--f2).Show();
	cout << "f2-- = ";
	(f2--).Show();
	cout << "f2 = ";
	(f2).Show();
	cout << "f2 - 10 = ";
	(f2 - 10).Show();
	cout << "10 - f2 = ";
	(10 - f2).Show();
	cout << "f1 = ";
	(f1).Show();
	cout <<	"f1[\"num\"] = 5   f1[\"denom\"] = 33" << endl;
	f1["num"] = 5;
	f1["denom"] = 33;
	cout << "f1 = ";
	(f1).Show();
	system("pause");
	return 0;
}