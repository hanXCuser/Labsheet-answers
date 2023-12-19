#include <iostream>
using namespace std;

int main()
{
    int x,y,NumberOfAdults, NumberOfChild;
    char answer;
    int feeAdults, feeChild;

    cout<<"Enter the fee charged for an adult: ";
    cin>>x;

    cout<<"Enter the fee charged for a child: ";
    cin>>y;

    cout<<"Enter the number of adults: ";
    cin>>NumberOfAdults;

    cout<<"Enter the number of children: ";
    cin>>NumberOfChild;

    cout<<"Are the adults a member? Y/N : ";
    cin>>answer;

    if ((answer == 'N') || (answer== 'n')){
        feeAdults = 2*x*NumberOfAdults;
        feeChild = 1.5*y*NumberOfChild;
        cout<<"The fee for the non-members adults are: "<<feeAdults<<endl;
        cout<<"The fee for the non-members children are: "<<feeChild<<endl;
    }
        else
        {
            feeAdults = x*NumberOfAdults;
            cout<<"The fee for the members adults are: "<<feeAdults<<endl;
            feeChild = y*NumberOfChild;
            cout<<"The fee for the members children are: "<<feeChild<<endl;

        }

    return 0;

}
