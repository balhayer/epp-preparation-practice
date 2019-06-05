#include <iostream>
#include <string>
#include "linkedList.h"

using namespace std;

// DO NOT WRITE ANY CODE BELOW THIS LINE (EXCEPT FOR TESTING)

int main() {

	int n;
	int value;
	linkedList myList;

	cout << "Enter number of integers: ";
	cin >> n;
	cout << "Enter " << n << " integers: ";
	
	for (int i = 0; i < n; i++) {
		cin >> value;
		myList.addFront(value);
	}

	myList.findTwoSmallest();
	//return 0;
	system("pause");
}
