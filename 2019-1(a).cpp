#include<iostream>
using namespace std;

int main()
{
    int m, n;
    int greater, smaller, factor;

    cout<<"Enter the first value: ";
    cin>>m;

    cout<<"Enter the second value: ";
    cin>>n;

    if (m>n){
        greater = m;
        smaller = n;
    }
        else{
            greater = n;
            smaller = m;
        }


    while (factor != 0){
        int temp = smaller;
        factor = greater % smaller;
        greater = smaller;
        smaller = factor;
    }

    cout<<"The highest common factor of both numbers is: "<<greater;


}
