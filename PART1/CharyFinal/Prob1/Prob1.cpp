#include <iostream>
#include <string>

using namespace std;

// implement printArray here
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// implement findTwoSmallest here
void findTwoSmallest(int arr[], int size) {
    int min1 = arr[0], min2 = arr[1];
    if (min1 > min2) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }
    for (int i = 2; i < size; ++i) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }
    cout << "Smallest: " << min1 << endl;
    cout << "Second smallest: " << min2 << endl;
}

// DO NOT WRITE ANY CODE BELOW THIS LINE (EXCEPT FOR TESTING - REMOVE BEFORE SUBMITTING)
int main() {
    int n;
    int arr[100];

    cout << "Enter number of integers: ";
    cin >> n;

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array contents: ";
    printArray(arr, n);

    findTwoSmallest(arr, n);

    //return 0;
	system("PAUSE");
}
