#include <iostream>
#include <iomanip>

using namespace std;

//computes the molecule's weight based on how many of each atom
double totalWeight(int o, int c, int n, int s, int h) {
	double t = o * 15.9994 + c * 12.011 + n * 14.00674 +
		s * 32.066 + h * 1.00794;
	cout << t << endl;
	return t;
}

void main() {
	int oxygen, carbon, nitrogen, sulfur, hydrogen;
	double total;
	
	//sets output format
	cout.setf(ios::fixed);
	cout.precision(3);

	//takes in input number of each atom
	cout << "Enter the number of atoms of Oxygen: ";
	cin >> oxygen;
	cout << "Enter the number of atoms of Carbon: ";
	cin >> carbon;
	cout << "Enter the number of atoms of Nitrogen: ";
	cin >> nitrogen;
	cout << "Enter the number of atoms of Sulfur: ";
	cin >> sulfur;
	cout << "Enter the number of atoms of Hydrogen: ";
	cin >> hydrogen;

	//calls function totalWeight to compute weight of molecule
	total = totalWeight(oxygen, carbon, nitrogen, sulfur, hydrogen);

	cout << "total weight is " << total << endl;
}