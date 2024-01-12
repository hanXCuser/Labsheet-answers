#include<iostream>
using namespace std;

double computePower(double x, int n)
{
    if (n==0){
        return 1;
    }
    if (n<0){
        //if n is negative, make it positive and invert x
        n = -n;
        x = 1/x;
    }
    if (n%2 == 0){
        // if n is even, use the formula x^n = (x^(n/2))^2
        return computePower(x*x, n/2);
    }
    else{
        // if n is odd, use the formula x^n = x * (x^(n-1))
        return x * computePower(x,n-1);
    }
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
