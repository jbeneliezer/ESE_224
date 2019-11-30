#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <list>
#include <sstream>

using namespace std;

// from basicFunctions.cpp
void printMessage(string, bool, bool);

// from basicFunctions.cpp
string loadRandomWord(string);

// from basicFunctions.cpp
string doubleSpace(string);

// from basicFunctions.cpp
void signin();

// from basicFunctions.cpp
int actionSelect();

// from game.cpp, used for playing game
class Game {
private:
	bool complete;
	char letter;
	int num_guesses, num_misses;
	string word_secret, word_current, guesses, misses, rope, head, torso, legs;
public:
	Game();
	void next();
	void printMan();
	void start();
	void play();
	void finish();
};

class Account {
protected:
	string username, password;
public:
	Account();
};

class User : public Account {
private:
	string streak, last_play;
	int wins = 0, losses = 0;
	double percentage = 0;
public:
	User();
	User(string, string);
	User(string, string, string, string, int, int, double);
	//User login(vector<User>, int);
	string getUsername();
	string getPassword();
	void print();
};


vector<User*> scanUsers(string);