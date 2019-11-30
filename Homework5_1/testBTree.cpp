#include "BinaryTree.h"
#include <iostream>
using namespace std;

int main()
{
	BinaryTree bt;
	int tmp;
	cout << "Enter numbers (q for quit): ";
	while (cin >> tmp)
		bt.insert(tmp);
	cout << "\nPre-Order: ";
	bt.preOrderPrint();
	cout << "\nPost-Order: ";
	bt.postOrderPrint();
	cout << "\nIn-Order: ";
	bt.inOrderPrint();
	cout << "\nCount: " << bt.countPrint() << endl;
	system("pause");
	return 0;
}