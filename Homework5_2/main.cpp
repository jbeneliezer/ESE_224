#include <iostream>
#include "Cylinder.h"
using namespace std;

int main()
{	
	Cylinder c1;
	Cylinder c2(0, 0, 1, 2);
	cout << "The volume of c1 is " << c1.Volume() << endl;
	cout << "The volume of c2 is " << c2.Volume() << endl;
	system("pause");
	return 0;
}