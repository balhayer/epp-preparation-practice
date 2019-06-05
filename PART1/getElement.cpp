#include <iostream>

using namespace std;
void printArray (int arg[], int length) ;
int getElement (int arg[], int length);
int main() {
   int myarray[100];
cout << "Enter number of integers : ";
int n;
cin >> n;
cout << "\nEnter " << n << " integers" << endl;
for (int i = 0; i < n; i++)
cin >> myarray[i];
cout << "\nContents of array : ";
printArray(myarray, n);
cout << "\nOutput of getElement: " << getElement(myarray, n) << endl;//Returns the maximum element in the array
//system("pause"); // comment/uncomment if needed

}
void printArray (int arg[], int length) {
for (int n=0; n<length; n++)
cout << arg[n] << ' ';
cout << '\n';
}
int getElement (int arg[], int length) {
int max=arg[0];
for (int n=1; n<length; n++)
{
if(arg[n]>max)
max=arg[n];
}
return max;
}
