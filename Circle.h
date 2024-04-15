#pragma once
#include "Shape.h"
using namespace std;

class Circle : public Shape
{
private:
	double radius;
public:
	Circle(double l) : radius(l) {}

	double getL() const { return radius; }

	void setL(double value) { radius = value; }

	virtual double perimeter() const override
	{
		return 2 * 3.14 * radius;
	}
};