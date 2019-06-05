// getElement 2nd smallest element

#include <iostream>
#define MAX 50
using namespace std;
 void printArray(int array[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<array[i]<<" ";
}

int getElement(int a[MAX],int n)
{
    int i,min,secondMin;
    min = secondMin = a[0];

    //find smallest element
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min = a[i];
    }

    //min now contains the smallest number in the array


    //second smallest element in array
    for(i=1;i<n;i++)
    {
        if(a[i] == min) //skip if number is equal to min
            continue; //skip the remaining statements of loop
        if(a[i]<secondMin && secondMin > min) // find second min ,secondMin should be greater than min
            secondMin = a[i];
    }
    return secondMin;
}
int main() {
    int i,n,array[MAX];
    cout<<"Enter number of integers : ";
    cin>>n;

    cout<<"\nEnter "<<n<<" integers : ";
    for(i=0;i<5;i++)
    {
        cin>>array[i];


    }

    cout<<"\nContents of array : ";
    printArray(array,n);

    cout<<"\nOutput of getElement : "<<getElement(array,n);

    return 0;
}


// Enter number of integers :5
// Enter 5 integers :23 45 10 17 92
// Contents of array : 23 45 10 17 92
// Output of getElement : 17
