#pragma once
#include "Circle.h"

class Cylinder : public Circle {
private:
	Circle circle;
	double height;
public:
	Cylinder();
	Cylinder(double x, double y, double r, double h);
	double Volume();
};