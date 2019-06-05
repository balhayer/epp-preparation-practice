#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i];
	}

}

// Implement isAscending here
bool isAscending(int array[], int n) {
	int lessNum = array[0];
	for (int i = 0; i < n; i++) {
		if (array[i] >= lessNum) {
			lessNum = array[i];
		}
		else if (array[i] <= lessNum) {
			return false;
		}
	}
	return true;
}

// DO NOT CHANGE MAIN FUNCTION BELOW
int main() {
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Contents of array : ";
	printArray(myarray, n);
	cout << "Output of isAscending: " << isAscending(myarray, n) << endl;
	system("pause");

}
