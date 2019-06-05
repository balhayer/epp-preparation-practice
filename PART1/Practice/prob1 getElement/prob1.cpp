#include <iostream>
#include <string>

using namespace std;

// Implement printArray here

void printArray (int arg[], int length) {
    for (int n=0; n<length; n++)
        cout << arg[n] << ' ';
    cout << '\n';
}

// Implement getElement here
int getElement (int arg[], int length) {
    int max=arg[0];
    for (int n=1; n<length; n++)
    {
        if(arg[n]>max)
            max=arg[n];
    }
    return max;
}



// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)

int main() {
  {
    int myarray[100] = {30, 20, 5, 10, 24};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 24" << endl;
  }
  {
    int myarray[100] = {15, 24, 30, 10, 5};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 24" << endl;
  }
  return 0;
}
