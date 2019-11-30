#include <iostream>
#include <vector>

using namespace std;

void input(vector<int>&);
void display(vector<int>);
double average(vector<int>);

int main() {
	vector<int> vec;

	input(vec);
	display(vec);
	cout << "\nAverage: " << average(vec) << endl;

	return 0;
}

// reads input from keyboard into a vector
void input(vector<int>& v) {
	cout << "Enter up to 10 golf scores, -1 to finish: ";
	int i, n(0);
	cin >> i;
	while (i != -1 && n < 10) {
		v.push_back(i);
		cin >> i;
		n++;
	}
}

// displays vector
void display(vector<int> v) {
	cout << "Scores:\t";
	for (auto &i: v) {
		cout << i << " ";
	}
}

// computes average of vector
double average(vector<int> v) {
	double sum = 0, args = 0;
	for (auto &i : v) {
		sum += i;
		args++;
	}
	return sum/ args;
}