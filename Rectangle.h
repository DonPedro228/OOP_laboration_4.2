#pragma once
#include "Shape.h"
using namespace std;

class Rectangle : public Shape
{
private:
	double length;
	double width;
public:
	Rectangle(double l, double w) : length(l), width(w) {}

	double getL() const { return length; }
	double getW() const { return width; }

	void setL(double value) { length = value; }
	void setW(double value_1) { width = value_1; }

	virtual double perimeter() const override
	{
		return 2 * (length + width);
	}
};