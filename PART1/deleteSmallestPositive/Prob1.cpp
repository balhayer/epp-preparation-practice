#include <iostream>

using namespace std;

void deleteSmallestPos(int arr[], int size) {
   int minPos = -1;
   for(int i = 0; i < size; ++i) {
      if(arr[i] > 0) {
         if(minPos == -1 || arr[i] < arr[minPos]) {
            minPos = i;
         }
      }
   }
   for(int i = minPos; i < size-1; ++i) {
      arr[i] = arr[i+1];
   }
}

void printArray(int arr[], int size) {
   for(int i = 0; i < size; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;
}

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
    deleteSmallestPos(myarray, n);
    cout << "Contents of array after deleteSmallestPos: ";
    printArray(myarray, n - 1);

    system("pause");
    return 0;
}
