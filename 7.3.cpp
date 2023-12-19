#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream readfile;
    ofstream writefile;

    readfile.open("Squares.txt");
    writefile.open("Analysis.txt", ios::app);

    string data;

    int num, sum=0, large= -1, small=100000,average;
    double n;

    while(!readfile.eof()){
        readfile>>num;

        if (num != 0){
            sum += num;
            n ++;
        }
        if (num>large){
            large = num;
        }
        else if (num<small){
            small = num;
        }
     }
    average = (sum/n);
    writefile<<"Sum"<<"\t"<<sum<<endl;
    writefile<<"Average"<<"\t"<<average<<endl;
    writefile<<"Largest"<<"\t"<<large<<endl;
    writefile<<"Smallest"<<"\t"<<small;
    writefile.close();
    readfile.close();



    return 0;
}

