#pragma once
#include "Shape.h"
using namespace std;

class Trapezoid : public Shape
{
private:
	double length;
	double width;
	double length_2;
	double width_2;
public:
	Trapezoid(double l1, double w1, double l2, double w2) : length(l1), width(w1), length_2(l2), width_2(w2) {}

	double getL() const { return length; }
	double getW() const { return width; }
	double getL2() const { return length_2; }
	double getW2() const { return width_2; }

	void setL(double value) { length = value; }
	void setW(double value_1) { width = value_1; }
	void setL2(double value) { length_2 = value; }
	void setW2(double value_1) { width_2 = value_1; }

	virtual double perimeter() const override
	{
		return length + width + length_2 + width_2;
	}
};