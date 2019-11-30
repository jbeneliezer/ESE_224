#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	// initialize objects
	string s, str;
	ifstream input("test.dat");
	ofstream output("output.dat");

	// test for file opening failure
	if (input.fail()) {
		cerr << "could not open test.dat";
		exit(1);
	}
	if (output.fail()) {
		cerr << "could not open output.dat";
		exit(1);
	}

	// adds each line to str, leaving out everything except numbers and signs
	while (getline(input, s)) {
		int i = 0;
		while (i < s.length()) {
			if (s[i] == '$' || s[i] == ')' || s[i] == ',') {
				i++;
				continue;
			}
			else if (s[i] == '(') {
				str += '-';
				
			}
			else {
				str += s[i];
			}
			i++;
			
		}
		str += '\n';
	}

	output << str << endl;

	input.close();
	return 0;
}