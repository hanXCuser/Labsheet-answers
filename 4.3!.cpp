#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int annualSalary, choice, total;
    int allowance, Personal_Allowance;
    char answer;
    total = 0;
    allowance=0;

     cout<<"Enter the number of independents: ";
        cin>>choice;




    do{


    switch(choice){
        case 0: Personal_Allowance == 255,000;
        break;
        case 1: Personal_Allowance == 325,000;
        break;
        case 2: Personal_Allowance == 395,000;
        break;
        case 3: Personal_Allowance == 455,000;
        break;
       default: cout<< "INVALID"<<endl;

           }
           cout<<"total Personal allowance = "<<(allowance += Personal_Allowance) ;
           cout<<"total = "<<(total ++);

           cout<<"Do you want to enter more independents? y/n ?";
           cin>>answer;
           if (answer = 'y'){
            cout<<"Enter the number of independents: ";
            cin>>choice;
           }
    }
    while (total<3);





    cout<<Personal_Allowance;
    cout<<total;




    return 0;
    }
