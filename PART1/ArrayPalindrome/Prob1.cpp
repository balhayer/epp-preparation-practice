#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int myarray[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << myarray[i];
        if(i != n-1) {
            cout << ", ";
        }
    }
    cout << endl;
}

// Implement getElement here
bool isPalindrome(int myarray[], int n) {
    for(int i = 0; i < n; ++i) {
        if(myarray[i] != myarray[n-i-1]) {
            return true;
        }
    }
    return false;
}

// DO NOT CHANGE MAIN FUNCTION BELOW
int main() {
    int myarray[100];
    cout << "Enter number of integers : ";
    int n;
    cin >> n;
    cout << "Enter " << n << " integers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> myarray[i];
    cout << "Contents of array : ";
    printArray(myarray, n);
    isPalindrome(myarray, n) ? cout << "Array is not a palindrome" << endl : cout << "Array is a palindrome" << endl;
    system("pause"); // comment/uncomment if needed
}
