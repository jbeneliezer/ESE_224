#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

double avgVec(vector<vector<double>>&);

int main() {
	int rows(10), columns(7);
	vector<double> row_vector(columns);
	vector<vector<double>> stats(rows);
	ifstream fin("power1.dat");

	if (fin.fail()) {
		cerr << "cannot open file power1.dat";
		exit(1);
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			fin >> row_vector[j];
		}
		stats[i] = row_vector;
	}

	cout << "Average power usage: " << avgVec(stats) << endl;

	fin.close();
	return 0;
}

double avgVec(vector<vector<double>>& v) {
	double sum(0);
	int num(0);
	for (auto& i : v) {
		for (auto& j : i) {
			sum += j;
			num++;
		}
	}
	return sum / num;
}