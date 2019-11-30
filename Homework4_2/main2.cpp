#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void flipVector(vector<T>&);

int main() {

	// initialize vectors of ints and chars
	vector<int> ints = { 1, 2, 3, 4, 5, 6 };
	vector<char> chars = { 'a', 'b', 'c', 'd', 'e', 'f' };

	// call flipVector on vectors
	flipVector(ints);
	flipVector(chars);

	// print out reversed int vector
	cout << "Reversed ints: ";
	for (auto& i : ints) cout << i << " ";

	// print out reversed char vector
	cout << "\nReversed chars: ";
	for (auto& i : chars) cout << i << " ";
	cout << endl;

	return 0;
}


template<typename T>
void flipVector(vector<T>& v) {

	// initialize iterators for start and end of vector
	typename vector<T>::iterator i = v.begin();
	typename vector<T>::iterator j = v.end() - 1;

	// swap beginning and ending items, increasing i and decreasing j each time
	for (; i < v.begin() + v.size() / 2; i++) {
		T temp = *i;
		*i = *j;
		*j-- = temp;
	}
}
