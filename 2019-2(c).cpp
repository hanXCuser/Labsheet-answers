#include <iostream>
using namespace std;
int main()
{
 int count = 0;
 float sum = 0.0;
 int x;

 cout << "Please enter some integer values:\n "
 "(Break with any letter)"<< endl;;

 while (cin>>x)
 {
    sum += x ;

 }
    count++;

    cout<< "The average of the numbers are:"<<(sum/count)<<endl;
    return 0;
}
