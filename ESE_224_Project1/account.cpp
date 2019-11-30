#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

Account::Account() {}

User::User() {
	username = "default";
}

User::User(string name, string pass) {
	username = name;
	password = pass;
}

User::User(string u, string p, string s, string last, int w, int l, double per) {
	username = u;
	password = p;
	streak = s;
	last_play = last;
	wins = w;
	losses = l;
	percentage = per;
}

void User::print() {
	cout << username << endl;
}

string User::getUsername() {
	return username;
}

string User::getPassword() {
	return password;
}

/*User User::login(vector<User> v, int tries) {
	while (tries > 0) {
		string u, p;
		cout << "Enter username: ";
		cin >> u;

		for (auto& i: v) {
			if (u.compare(i.getUsername()) == 0) {
				cout << "Enter password: ";
				cin >> p;
				if (p.compare(i.getPassword()) == 0) return i;
				else return User();
			}
		}
		cout << "Incorrect username or password" << endl;
		--tries;
	}
	return User();
}*/