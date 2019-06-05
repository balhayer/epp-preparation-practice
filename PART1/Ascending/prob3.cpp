#include <iostream>
#include <string>

using namespace std;

// Implement recursive function isAscending here
bool isAscending(int arr[], int startArray, int endArray) {
	if (startArray == endArray) {
		return true;
	}
	else if (arr[startArray] <= arr[startArray + 1]) {
		startArray = startArray + 1;
		return isAscending(arr, startArray, endArray);
	}
	else if (arr[startArray] >= arr[startArray + 1]) {
		return false;
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
	cout << "Output of isAscending : " << isAscending(myarray, 0, n-1) << endl;
}
