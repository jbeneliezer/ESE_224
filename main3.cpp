#include <iostream>


using namespace std;

string letterGrade(int num) {
	if (num >= 97 && num <= 100)
		return "A+";
	else if (num >= 93 && num <= 96)
		return "A";
	else if (num >= 90 && num <= 92)
		return "A-";
	else if (num >= 87 && num <= 89)
		return "B+";
	else if (num >= 83 && num <= 86)
		return "B";
	else if (num >= 80 && num <= 82)
		return "B-";
	else if (num >= 77 && num <= 79)
		return "C+";
	else if (num >= 73 && num <= 76)
		return "C";
	else if (num >= 70 && num <= 72)
		return "C-";
	else if (num >= 67 && num <= 69)
		return "D+";
	else if (num >= 63 && num <= 66)
		return "D";
	else if (num >= 60 && num <= 62)
		return "D-";
	else if (num >= 0 && num <= 59)
		return "F";
	else
		cout << "Invalid number grade" << endl;
	return "";
}

void main() {
	int numGrade = 0;


	cout << "Enter number grade (integer), Enter -1 to exit: ";
	cin >> numGrade;

	while (numGrade != -1) {

		(letterGrade(numGrade) != "") ? (cout << "Letter Grade is: " << letterGrade(numGrade) << endl): cout << "\n";
		numGrade = 0;

		cout << "Enter number grade (integer), Enter -1 to exit: ";
		cin >> numGrade;
	}
}