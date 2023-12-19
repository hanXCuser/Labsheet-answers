#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string line;

    ifstream readfile;
    ofstream writefile;

    readfile.open("input.dat.txt");
    writefile.open("output.dat.txt");

    if (!readfile.eof()){
            while(getline(readfile,line)){
            writefile<<line<<endl;
            }
             cout<<"Copy Finished";
    }
    else
    {
        cout<<"Cannot read file";

    }

    writefile.close();

    readfile.close();
    return 0;

}
