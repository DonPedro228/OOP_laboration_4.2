#pragma once
#include "Shape.h"
using namespace std;

class Triangle : public Shape
{
private:
	double c1;
	double c2;
	double gyp;
public:
	Triangle(double cat1, double cat2, double g) : c1(cat1), c2(cat2), gyp(g) {}

	double getC1() const { return c1; }
	double getC2() const { return c2; }
	double getGyp() const { return gyp; }

	void setC1(double value) { c1 = value; }
	void setC2(double value_1) { c2 = value_1; }
	void setGyp(double value_2) { gyp = value_2; }

	virtual double perimeter() const override
	{
		return c1 + c2 + gyp;
	}
};