#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("squares.txt");
    ofile<<"Number"<<"\t"<<"Square"<<endl;


    int num, square;
    while(!ofile.eof()){
        cout<<"Enter a number: ";
        cin>>num;

        if (num==0){
            break;
    }

    square=(num*num);

    ofile<<num<<"\t"<<square<<endl;



}


      ofile.close();


     return 0;


}
