#include <iostream>

using namespace std;

class StraightLine {
private:
	double slope, yintercept;
public:
	StraightLine();
	StraightLine(double k, double b);
	void print();
	double getSlope();
	double getXIntercept();
	double getYIntercept();
	void yShift(double d);
	void xShift(double d);
	void rotate(double a);
	bool operator || (StraightLine& L) const;
	void operator * (int m);

};