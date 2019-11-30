#include <iostream>
#include "StraightLine.h"

using namespace std;

StraightLine::StraightLine() {
	slope = 1;
	yintercept = 0;
}

StraightLine::StraightLine(double k, double b) {
	slope = k;
	yintercept = b;
}

void StraightLine::print() {
	cout << "y = " << slope << "x + " << yintercept << endl;
}

double StraightLine::getSlope() {
	return slope;
}

double StraightLine::getXIntercept() {
	return -(yintercept / slope);
}

double StraightLine::getYIntercept() {
	return yintercept;
}

void StraightLine::yShift(double d) {
	yintercept += d;
}

void StraightLine::xShift(double d) {
	yintercept = -slope * d + yintercept;
}

void StraightLine::rotate(double a) {
	slope += a;
}

bool StraightLine::operator || (StraightLine& L) const {
	if (slope == L.slope)
		return true;
	else
		return false;
}

void StraightLine::operator * (int m) {
	slope *= m;
	yintercept *= m;
}