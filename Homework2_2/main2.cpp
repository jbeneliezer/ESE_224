#include <iostream>
#include "harmonic.h"

using namespace std;

int main() {
	double x, y;
	while (true) {
		cout << "Enter number one: ";
		cin >> x;
		cout << "Enter number two: ";
		cin >> y;
		if (x != 0 && y != 0) {
			cout << "harmonic mean of x and y is: " << harmonicMean(x, y) << endl;
		} else {
			cout << "exiting program" << endl;
			break;
		}
	}
	return 0;
}