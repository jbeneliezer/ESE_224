#include <iostream>
#include <vector>

using namespace std;

void descendSort(vector<int>&);
bool search(vector<int>, int);

int main() {
	int value;
	vector<int> input = {29, 32, 20, 78, 31};
	descendSort(input);

	// prints out vector in descending order
	cout << "Arranged in descending order: ";
	for (auto i = input.begin(); i != input.end(); i++) {
		cout << *i << ' ';
	}
	cout << endl;

	// asks user for item to search for
	cout << "Enter item to search for: ";
	cin >> value;

	// prints out result of calling search function on vector
	cout << ((search(input, value)) ? "Item found" : "Item not found") << endl;
	return 0;
}

// arranges a vector in descending order
void descendSort(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		for (vector<int>::iterator j = v.begin(); j != v.end() - 1; j++) {
			if (*j < *(j + 1)) {
				iter_swap(j, j + 1);
			}
		}
	}
}

// searches an integer vector for a specific value
bool search(vector<int> v, int item) {
	vector<int>::iterator top(v.begin()), bottom(v.end()), mid;
	while (top <= bottom) {
		vector<int> vtemp(top, bottom);
		mid = top + vtemp.size() / 2;
		if (*mid == item) {
			return true;
		}
		else if (item > *mid) {
			bottom = mid - 1;
		}
		else {
			top = mid + 1;
		}
	}
	return false;
}
