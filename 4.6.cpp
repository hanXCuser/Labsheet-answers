#include<iostream>
using namespace std;

int main()
{
    int type;

    cout<<"Enter the type of car between 1 and 5: "<<endl;
    cin>>type;

    switch(type){
    case 1 : cout<<"Type 1 is a car of 1500CC"<<endl;
    break;
    case 2 : cout<<"Type 2 is a car of 1500CC with automatic mirrors"<<endl;
    break;
    case 3: cout<<"Type 3 is a car of 1500CC with automatic mirrors and front and rear sensors"<<endl;
    break;
    case 4 : cout<<"Type 4 is a car of 1200CC"<<endl;
    break;
    case 5: cout<<"Type 5 is a car of 1200CC with automatic gear"<<endl;
    break;
    default : cout<<"Invalid Type!!"<<endl;
    }
    return 0;

}
