#include<iostream>
#include<cmath>
using namespace std;

int sphereVolume(double r)
{
    double volume;

    volume = ((4.0/3.0)*(3.142)*pow(r,3));
    return volume;
}

int main()
{
   double radius;
    cout<<"Enter the radius of the spheres: ";
    cin>>radius;

    cout<<"Volume of sphere of radius "<<radius<<" = "<<sphereVolume(radius);


}
