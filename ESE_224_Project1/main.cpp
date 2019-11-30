#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	// takes user to sign in page
	signin();

	// makes user choose action, repeats until valid command
	int command = actionSelect();

	// executed if user chooses 1
	if (command == 1) {
		Game game;

		game.start();
		game.play();
		game.finish();
	}
	else if (command == 2) {
		User user;
		vector<User*> vec = scanUsers("UserAccountHistory.txt");
		for (auto& i : vec) {
			i->print();
		}
		/*User tmp = user.login(vec, 1);
		if (tmp.getUsername() == "default") main();
		user.print();
		return 0;*/
	}

	system("cls");

	// repeats main
	main();
}