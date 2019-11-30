#include <iostream>
#include "StraightLine.h"

using namespace std;



int main() {
	double m, b, yshift, xshift, slopeshift;

	cout << "Constructing default line: " << endl;
	StraightLine default_line;

	cout << "Enter slope for new line: ";
	cin >> m;
	cout << "Enter y intercept: ";
	cin >> b;
	StraightLine my_line{ m, b };

	cout << "Default line: ";
	default_line.print();
	cout << "My_line: ";
	my_line.print();
	
	cout << "Retrieving slope: " << my_line.getSlope() << endl;

	cout << "Retrieving x intercept: " << my_line.getXIntercept() << endl;

	cout << "Retrieving y intercept: " << my_line.getYIntercept() << endl;

	cout << "Enter vertical shift (positive for up and negative for down): ";
	cin >> yshift;
	my_line.yShift(yshift);
	my_line.print();

	cout << "Enter horizontal shift (positive for right and negative for left): ";
	cin >> xshift;
	my_line.xShift(xshift);
	my_line.print();

	cout << "Enter amount to change slope (positive for increase and negative for decrease): ";
	cin >> slopeshift;
	my_line.rotate(slopeshift);
	my_line.print();

	double new_m, new_b;
	cout << "Enter new slope for parallel comparison: ";
	cin >> new_m;
	cout << "Enter new y intercept: ";
	cin >> new_b;
	cout << "New line: ";
	StraightLine new_line{ new_m, new_b };
	new_line.print();
	
	cout << ((my_line || new_line) ? "my_line and new_line are parallel" : "my_line and new_line are not parallel") << endl;

	int i;
	cout << "Enter integer to increase my_line by: ";
	cin >> i;
	my_line* i;
	my_line.print();

}