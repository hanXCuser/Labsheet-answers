#include<iostream>
#include<cmath>
using namespace std;

double computePower(double x, int n)
{
    double result = 1;
    if (n<0){
        //if n is negative, make it positive and invert x
        n = -n;
        x = 1/x;
    }
    for (int i=0; i<n; i++){
        //multiply the result by x
        result *= x;

    }
    return result;
}

int main()
{
    double x, n;
    cout<<"Enter the value: ";
    cin>>x;

    cout<<"Enter the power to which the value is raised: ";
    cin>>n;

    cout<<"Result = "<<computePower(x,n);
}

