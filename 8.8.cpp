#include<iostream>
using namespace std;

void double_value(int n1, int n2, int n3)
{
    int val1 = (n1 * 2);
    int val2 = (n2 * 2);
    int val3 = (n3 * 2);

   cout<<"The double of "<<n1<<" = "<<val1<<endl;
   cout<<"The double of "<<n2<<" = "<<val2<<endl;
   cout<<"The double of "<<n3<<" = "<<val3<<endl;

}

int main()
{
    double_value(1, 3, 7);
    return 0;

}
