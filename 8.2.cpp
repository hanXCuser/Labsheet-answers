#include<iostream>
using namespace std;

int sumArray(int A[], int B[],int sum[], int n)
{
    for(int i=0; i<n; i++){
        sum[i] = A[i] + B[i];
    }
}

void inputArray(int array[], int n)
{
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i + 1<<": ";
        cin>>array[i];
    }
}

int main()
{
    int size;
    cout<<"What is the size of the arrays? ";
    cin>>size;

    int X1[size], X2[size], sum[size];

    cout<<"Enter the elements of X1: "<<endl;
    inputArray(X1, size);

    cout<<"Enter the elements of X2: "<<endl;
    inputArray(X2, size);

    sum[size] = sumArray(X1, X2, sum, size);


    for(int i=0; i<size; i++){
        cout<<"The sum of element "<<i<<" in X1 and X2 = "<<sum[i]<<endl;

    }
    return 0;
}
