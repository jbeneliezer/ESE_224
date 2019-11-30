#include "Point.h"

class Circle {
protected:
	Point center;
	double radius;
public: 
	Circle();
	Circle(double x, double y, double r);
	void print();
	double area();
	void operator /(double s);
};
