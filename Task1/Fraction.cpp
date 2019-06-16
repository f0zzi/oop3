#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) :numerator(numerator)
{
	SetDenom(denominator);
}

void Fraction::SetDenom(int denominator)
{
	if (denominator == 0)
	{
		this->denominator = 1;
		return;
	}
	this->denominator = denominator;
	if (denominator < 0)
	{
		this->numerator *= -1;
		this->denominator = -this->denominator;
	}
}

void Fraction::Show()
{
	if (denominator > 1)
		this->Normalize();
	cout << numerator;
	if (denominator != 1 && numerator != 0)
		cout << "/" << denominator;
	cout << endl;
}

Fraction Fraction::operator/(const Fraction& other) const
{
	if (other.numerator == 0)
	{
		cout << "Error. Division by zero. Result is reset to zero.\n";
		system("pause");
		return Fraction();
	}
	else
		return Fraction(this->numerator * other.denominator, this->denominator * other.numerator);
}

void Fraction::Normalize()
{
	int tmp = (numerator < 0 ? -numerator : numerator);
	int min = (tmp < denominator ? tmp : denominator);
	int divider = 1;
	for (int i = 2; i <= min; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
			divider = i;
	}
	if (divider > 1)
	{
		numerator /= divider;
		denominator /= divider;
	}
}

int& Fraction::operator[](const char* element)
{
	if (!strcmp("num", element))
		return numerator;
	else if (!strcmp("denom", element))
		return denominator;
	else
	{
		cout << "Error.";
		exit(1);
	}
}

Fraction& operator--(Fraction& fraction)
{
	fraction = fraction - Fraction(1, 1);
	return fraction;
}

Fraction operator--(Fraction& fraction, int)
{
	Fraction tmp(fraction);
	fraction = --fraction;
	return tmp;
}

Fraction operator-(const Fraction& fraction, int number)
{
	return fraction - Fraction(number);
}

Fraction operator-(int number, const Fraction& fraction)
{
	Fraction tmp = Fraction(number) - fraction;
	return tmp;
}
