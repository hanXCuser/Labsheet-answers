#include<iostream>
using namespace std;

int main()
{
    int x,y;
    float minCharge, total;

    cout<<"Enter tariff number: ";
    cin>>x;

        cout<<"Enter number of units consumed: "<<endl;
        cin>>y;


    switch(x){
    case 110: minCharge = 44.00;

    case 120: minCharge = 184.00;

    case 140: minCharge = 360.00;

    default : cout<<"Invalid"<<endl;
    break;
        }


        if (x == 110){
            if (y<=25){
                total = (2.75 + minCharge);
                cout<<"The total amount to be paid is "<<total;
            }
            else if (y<=50 ){
                total = (3.25 + minCharge);
                cout<<"The total amount to be paid is "<<total;

            }
            else if (y<=75){
                total = (4.00 + minCharge);
                cout<<"The total amount to be paid is "<<total;
            }
            else{
                total = (6.50 + minCharge);
                cout<<"The total amount to be paid is "<<total;

            }
         }
           else if (x == 120){
                   if (y<=25){
                total = (3.00 + minCharge);
                cout<<"The total amount to be paid is "<<total;
            }
            else if (y<=50 ){
                total = (3.50 + minCharge);
                cout<<"The total amount to be paid is "<<total;

            }
            else if (y<=75){
                total = (4.25 + minCharge);
                cout<<"The total amount to be paid is "<<total;
            }
            else{
                total = (6.00 + minCharge);
                cout<<"The total amount to be paid is "<<total;

            }
         }

         else if (x==140){
            if (y<=25){
                total = (3.25 + minCharge);
                cout<<"The total amount to be paid is "<<total;
            }
            else if (y<=50 ){
                total = (3.75 + minCharge);
                cout<<"The total amount to be paid is "<<total;

            }
            else if (y<=75){
                total = (4.50 + minCharge);
                cout<<"The total amount to be paid is "<<total;
            }
            else{
                total = (5.75 + minCharge);
                cout<<"The total amount to be paid is "<<total;

            }
         }


         return 0;
}

