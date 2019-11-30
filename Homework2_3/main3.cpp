#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Upper(string&);

int main() {
	string str;

	cout << "Enter string: ";
	getline(cin, str);

	// takes in string from keyboard until q is pressed
	while (str.compare("q") != 0) {
		Upper(str);
		cout << str << endl;
		cout << "Enter string: ";
		getline(cin, str);
	}

	return 0;
}

// converts string to upper case
void Upper(string& s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = toupper(s[i]);
	}
	return;
}