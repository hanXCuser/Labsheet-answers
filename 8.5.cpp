#include<iostream>
#include<cmath>
using namespace std;

void square(double x, double y, double z)
{
    double value;
    value = ((40 * x * x) + (50 * y * y) + (20 * z * z));
    cout<<value;
}

int main()
{
    double x, y, z;

    cout<<"Enter the value of x: ";
    cin>>x;

    cout<<"Enter the value of y: ";
    cin>>y;

    cout<<"Enter the value of z: ";
    cin>>z;

    cout<<" 40x^2 + 50y^2 + 20z^2 = ";
    square(x,y,z);
    return 0;
}
