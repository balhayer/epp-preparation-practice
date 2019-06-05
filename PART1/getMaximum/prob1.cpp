#include <iostream>

#include <string>

using namespace std;

int getMaximum(int array[], int setvalue, int pos)

{

int large;

large = setvalue;

if(setvalue == 0)

{

large = array[setvalue];

}

if (pos == 0)

return large;

if (pos > 0)

{

if (array[pos] > large)

{

large = array[pos];

}

return getMaximum(array,large,pos-1);

}

}

int main() {

int myarray[100];

cout << "Enter number of integers : ";

int n;

cin >> n;

cout << "Enter " << n << " integers" << endl;

for (int i = 0; i < n; i++)

cin >> myarray[i];

cout << "Maximum value : " << getMaximum(myarray, 0, n-1) << endl;

}
