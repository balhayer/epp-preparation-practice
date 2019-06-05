#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Implement isAllEqual here
bool isAllEqual(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] != arr[i+1]) {
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
    cout << "Output of isAllEqual: " << isAllEqual(myarray, n) << endl;
    system("pause");

}
