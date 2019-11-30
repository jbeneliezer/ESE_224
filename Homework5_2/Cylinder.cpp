#include "Cylinder.h"

Cylinder::Cylinder() : height(1), circle() {}

Cylinder::Cylinder(double x, double y, double r, double h) : height(h), circle(x, y, r) {}

double Cylinder::Volume() {
	return circle.area() * height;
}
