#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifile;
    ifile.open("Squares.txt");

    char ch;

    while (ifile.get(ch)){
        cout<<ch;
    }
    cout<<"End of line content"<<endl;


    ifile.close();
    return 0;

}
