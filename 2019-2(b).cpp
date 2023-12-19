#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream iFile("A.txt");
    ofstream Bfile("B.txt");
    ofstream Cfile("C.txt");

    int num;

    while(iFile>>num){
        if (num % 2 == 0){
            Bfile<<num<<endl;
        } else{
        Cfile<<num<<endl;
        }
    }
    iFile.close();
    Bfile.close();
    Cfile.close();

    ifstream Bfilein("B.txt");
    ifstream Cfilein("C.txt");

    cout<<"Data in file B: "<<endl;
    while (Bfilein>>num){
        cout<<num<<endl;
    }

    cout<<"Data in file C: "<<endl;
    while (Cfilein>>num){
        cout<<num<<endl;
    }

    Bfilein.close();
    Cfilein.close();
    return 0;

}
