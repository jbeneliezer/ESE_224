#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

bool isPalindrome(string);

int main() {
	string input;
	
	cout << "Enter string: ";
	getline(cin, input);

	cout << input << (isPalindrome(input) ? " is a palindrome" : " is not a palindrome") << endl;

	return 0;
}

bool isPalindrome(string str) {
	stack <char> s;
	queue <char> q;
	for (char c : str) {
		if (!isalnum(c)) continue;
		s.push(tolower(c));
		q.push(tolower(c));
	}

	while (!s.empty()) {
		if (s.top() != q.front())
			return false;

		s.pop();
		q.pop();
	}

	return true;
}