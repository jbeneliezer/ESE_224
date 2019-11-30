#include<iostream>
#include<cmath>
#include"Point.h"
using namespace std;

Point::Point() : xCoord(0), yCoord(0) {}

Point::Point(double x, double y) : xCoord(x), yCoord(y) {}

void Point::setX(double x)
{
	xCoord = x;
}

void Point::setY(double y)
{
	yCoord = y;
}

double Point::getX() const
{
	return xCoord;
}

double Point::getY() const
{
	return yCoord;
}

double Point::operator -(const Point& rhs) const
{
	double x, y, d;
	x = xCoord - rhs.xCoord;
	y = yCoord - rhs.yCoord;
	d = sqrt(pow(x, 2) + pow(y, 2));
	return d;
}

bool Point::operator ==(const Point& rhs) const
{
	if (xCoord == rhs.xCoord && yCoord == rhs.yCoord)
		return true;
	else
		return false;
}