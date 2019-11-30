#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(): center(), radius(1) {}

Circle::Circle(double x, double y, double r) : center(x, y), radius(r) {}

void Circle::print()
{
	cout << "This point is centered at (" << center.getX() << "," << center.getY() << ") with radius = " << radius << endl;
}

double Circle::area()
{
	double a;
	a = 3.1416 * pow(radius, 2);
	return a;
}

void Circle::operator /(double s)
{
	radius = radius / s;
}