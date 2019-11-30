#include <iostream>
#include <fstream>
#include <array>

constexpr auto MAX_NUM = 99999;;

using namespace std;

void minPower(double[10][7], int[70][2], int&, double&);

int main() {
	double arr[10][7] = { 0 };
	int occurrence[70][2];
	int num_occurrences(0);
	double minimum(MAX_NUM);
	ifstream fin("power1.dat");

	if (fin.fail()) {
		cerr << "cannot open file power1.dat";
		exit(1);
	}

	// initializes array with values from power1.dat
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 7; j++) {
			fin >> arr[i][j];
		}
	}

	// calls minPower on array
	minPower(arr, occurrence, num_occurrences, minimum);

	// prints out the minimum power day(s)
	cout << "Minimum power day(s):" << endl;
	for (int i = 0; i <= num_occurrences; i++) {
		cout << "Week: " << occurrence[i][0]  + 1 << ", Day: " << occurrence[i][1]  + 1 << ", Minimum: " << minimum << endl;
	}
	fin.close();
	return 0;
}

// finds minimum power days
void minPower(double a[10][7], int time[70][2], int& k, double& minimum) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 7; j++) {
			if (a[i][j] < minimum) {
				minimum = a[i][j];
				time[k][0] = i;
				time[k][1] = j;
			}
			else if (a[i][j] == minimum) {
				k++;
				time[k][0] = i;
				time[k][1] = j;
			}
		}
	}
}
