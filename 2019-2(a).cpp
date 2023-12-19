#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout<<"Enter first integer: ";
    cin>>num1;
    cout<<"Enter second integer: ";
    cin>>num2;

    cout<<"The sum of the two integers = "<<(num1 + num2)<<endl;

    if (num1>num2){
        cout<<"The difference of the two integers = "<<(num1 - num2)<<endl;
        cout<<"The remainder of the two integers = "<<(num1%num2)<<endl;
        cout<<"The quotient of the two integers = "<<(num1/num2)<<endl;
    }
    else{
        cout<<"The difference of the two integers = "<<(num2 - num1)<<endl;
        cout<<"The remainder of the two integers = "<<(num2%num1)<<endl;
        cout<<"The quotient of the two integers = "<<(num2/num1)<<endl;
        }

     cout<<"The product of the two integers = "<<(num1 * num2)<<endl;
      return 0;





}


