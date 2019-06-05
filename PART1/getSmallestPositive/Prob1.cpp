#include <iostream>

void printArray(int arr[], int n);
int getSmallestPositive(int arr[], int n);

using namespace std;

int main() {
    int myarray[100];
    cout << "Enter number of integers : ";
    int n;
    cin >> n;
    cout << "Enter " << n << " integers" << endl;
    for (int i = 0; i < n; i++) cin >> myarray[i];
    cout << "Contents of array : ";
    printArray(myarray, n);
    cout << "Output of getElement: " << getSmallestPositive(myarray, n) << endl;
    system("pause");
    // comment/uncomment if needed
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getSmallestPositive(int arr[], int n) {
    int ind = -1;
    for(int i = 0; i < n; ++i) {
        if(arr[i] > 0 && (ind == -1 || arr[ind] > arr[i])) {
            ind = i;
        }
    }
    return arr[ind];
}
