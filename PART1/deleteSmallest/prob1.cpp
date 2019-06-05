#include <iostream>
#include <string>
using namespace std;
// Implement printArray here

void printArray(int arr[], int size) {
   for(int i = 0; i < size; ++i) {
       cout << arr[i] << " ";
   }
   cout << endl;
}

// Implement deleteSmallest here
void deleteSmallest(int arr[], int size) {
   int index = 0;
   for(int i = 0; i < size; ++i) {
       if(arr[i] < arr[index]) {
           index = i;
       }
   }
   for(int i = index; i < size-1; ++i) {
       arr[i] = arr[i+1];
   }
}


// DO NOT CHANGE MAIN FUNCTION BELOW
int main()
{
    int myarray[100];
    cout << "Enter number of integers : ";
    int n;
    cin >> n;
    cout << "Enter " << n << " integers" << endl;
    for (int i = 0; i < n; i++)
        cin >> myarray[i];
    cout << "Contents of array : ";
    printArray(myarray, n);
    deleteSmallest(myarray, n);
    cout << "Contents of array after deleteSmallest: ";
    printArray(myarray, n - 1);
}
