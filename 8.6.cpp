#include<iostream>
#include<cmath>
using namespace std;

double cyl_Area(double r, double h)
{
    double Area = ((2*3.142*pow(r,2)) + (2*3.142*r*h));
    return Area;
}

double cyl_Paint(double r, double h, double PricePerArea)
{
    double a = cyl_Area(r,h);

    double Price =  (a * PricePerArea);
    return Price;
}

int main()
{
    double radius, height, PricePerUnitA;

    cout<<"Enter the radius of the cylindrical tank: ";
    cin>>radius;
    cout<<"Enter the height of the cylindrical tank: ";
    cin>>height;
    cout<<"Enter the price per unit area of the cylindrical tank: ";
    cin>>PricePerUnitA;

    cout<<"The price of painting the tank = "<<cyl_Paint(radius, height, PricePerUnitA);

    return 0;

}
