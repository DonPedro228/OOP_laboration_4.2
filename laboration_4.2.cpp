#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

int main() {
    double l1, l2;
    cout << "Input sides of rectangle: "; cin >> l1; cin >> l2;
    cout << endl;
    Rectangle rectangle(l1, l2);
    double r;
    cout << "Input radius of circle: "; cin >> r;
    cout << endl;
    Circle circle(r);
    double cat1, cat2, gyp;
    cout << "Input sides of triangle: "; cin >> cat1; cin >> cat2; cin >> gyp;
    cout << endl;
    Triangle triangle(cat1, cat2, gyp);
    double s1, s2, s3, s4;
    cout << "Input sides of trapezoid: "; cin >> s1; cin >> s2; cin >> s3; cin >> s4;
    cout << endl;
    Trapezoid trapezoid(s1, s2, s3, s4);

    Shape* shapes[] = { &rectangle, &circle, &triangle, &trapezoid };

    for (const auto& shape : shapes) {
        cout << "Perimeter of the shape is: " << shape->perimeter() << endl;
        cout << "Type of the shape is: " << typeid(*shape).name() << endl;
    }

    return 0;
}