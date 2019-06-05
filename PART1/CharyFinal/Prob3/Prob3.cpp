#include <iostream>

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

	cout << "Enter number: ";

	cin >> value;

	cout << "Total multiples of " << value << ": " << myList.multiplesOf(value) << endl;

	//return 0;
	system("PAUSE");

}

// Sample run:

// Enter a number of integers: 5

// Enter 5 integers: 7 6 2 9 1

// Enter a number: 3

// Total multiplies of 3: 2