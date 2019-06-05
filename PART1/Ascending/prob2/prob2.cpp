//
// DO NOT EDIT THIS FILE
// WRITE YOUR CODE IN IntegerLinkedList.h and IntegerLinkedList.cpp
//

#include <iostream>
#include <string>
#include "IntegerLinkedList.h"

using namespace std;

int main() {
	IntegerLinkedList mylist;
	cout << "Enter number of integers : ";
	int n, value;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> value;
		mylist.addFront(value);
	}

	cout << "isAscending: " << mylist.isAscending() << endl;
	system("pause");
}
