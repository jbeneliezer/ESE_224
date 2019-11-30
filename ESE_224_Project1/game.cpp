#include <iostream>
#include "Header.h"

using namespace std;

Game::Game() {
	complete = false;
	rope = "|";
	num_guesses = num_misses = 0;
}

// prints game environment to the console
void Game::printMan() {
	printMessage("Hangman", true, false);
	printMessage(rope, true, false);
	printMessage(head, false, false);
	printMessage(torso, false, false);
	printMessage(legs, false, true);
	printMessage(doubleSpace(word_current), false, true);
}

// advances hangman to next stage, used when user character guess is wrong
void Game::next() {
	if (head == "") head = "O";
	else if (torso == "") torso = "|";
	else if (torso == "|") torso = "/| ";
	else if (torso == "/| ") torso = "/|\\";
	else if (legs == "") legs = "/  ";
	else if (legs == "/  ") {
		legs = "/ \\";
		complete = true;
	}
}

// sets up game environment, initializes word_secret and word_current
void Game::start() {
	system("cls");
	word_secret = loadRandomWord("Wordlist.txt");

	// comment out next block to keep word_secret from view
	cout << "word is: " << word_secret << endl;
	system("pause");
	system("cls");

	for (char i : word_secret) word_current += '_';
	printMan();
}

// asks for user input of a character, checks if it is in word_secret, exits when word_current == word_secret or when man is complete
void Game::play() {
	if ((word_current.compare(word_secret) == 0) || complete) return;
	cout << "guess a letter: ";
	cin >> letter;
	if (word_secret.find(letter) == string::npos) {
		if (misses.find(letter) == string::npos) {
			misses += letter;
			num_misses++;
			next();
		}
	}
	else {
		if (guesses.find(letter) == string::npos) {
			guesses += letter;
			num_guesses++;
		}
		for (int i = 0; i < word_secret.length(); i++) {
			if (word_secret[i] == letter) word_current[i] = letter;
		}
	}
	system("cls");
	printMan();
	cout << "Guesses: " << doubleSpace(guesses) << endl;
	cout << "Misses: " << doubleSpace(misses) << endl;
	play();
}

// finishes game and prints final results
void Game::finish() {
	system("cls");
	printMan();
	cout << "Guesses: " << doubleSpace(guesses) << endl;
	cout << "Misses: " << doubleSpace(misses) << endl;
	cout << ((complete) ? "You lost, better luck next time." : "You won, congratulations!") << endl;
	system("pause");
}
