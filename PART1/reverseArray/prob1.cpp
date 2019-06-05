#include <iostream>

#include <string>

using namespace std;

// Implement printArray here
void printArray(int arr[], int n){
   for(int i = 0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

// Implement reverseArray here
void reverseArray(int arr[], int n){
   int i = 0,j=n-1, temp;
   while(i<j){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
   }
}

// DO NOT WRITE ANY CODE BELOW THIS LINE (EXCEPT FOR TESTING)

int main() {

int myarray[100];

cout << "Enter number of integers : ";

int n;

cin >> n;

cout << "Enter " << n << " integers:";

for (int i = 0; i < n; i++)

cin >> myarray[i];

cout << "Contents of array : ";

printArray(myarray, n);

reverseArray(myarray, n);

cout << "Contents of array after reversing : ";

printArray(myarray, n);

}
