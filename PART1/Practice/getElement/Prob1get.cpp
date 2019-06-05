#include <iostream>

#include <string>

using namespace std;

// Implement printArray here
void printArray(int arr[], int n)

{

    int i;

    for(i=0; i<n; i++)

        cout<<arr[i]<<" ";

    cout<<endl;

}






// Implement getElement here

// Implement getElement here

int getElement(int arr[], int k)

{

    return arr[k-1];

}

// getMinimum

int getMinumum(int arr[], int n)

{

    int i, min;

    min = arr[0];

    for(i=1; i<n; i++)

        if(arr[i]<min)

            min = arr[i];

    return min;

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

    cout << "Output of getElement: " << getElement(myarray, n) << endl;

    system("pause"); // comment/uncomment if needed

}
