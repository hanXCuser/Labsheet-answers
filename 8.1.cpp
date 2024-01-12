#include<iostream>
using namespace std;

void maxPosn(int n, int X[n])
{
    int max;
    for(int i=0, i<=n, i++){
        if X[i+1] > X[i]{
            X[i+1] = max;
        }
    }
    cout<<max;
}

int main()
{
    int A[10];

    cout<<"Input 10 values for array A: ";
    for(int i= 0; i < 10, i++){
        cin>>A[i];
    }

    cout<<"The highest value in A: "<<maxPsn(10, X[10]);
}
