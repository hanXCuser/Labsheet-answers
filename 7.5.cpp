#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream readfile;
  readfile.open("Squares.txt");

  ofstream writefile1;
  writefile1.open("Analysis.txt");

  ofstream writefile2;
  writefile2.open("target.txt");

  string data;

  while (!readfile.eof()){
    readfile>>data;
    writefile1<<data<<endl;
      }
      cout<<"Copy finished in first file"<<endl;
      writefile1.close();

      ifstream readfile1;
      readfile1.open("Analysis.txt");

  while (!readfile1.eof()){
    readfile1>>data;
    writefile2<<data<<endl;
  }
  cout<<"Copy finished in second file"<<endl;
      writefile2.close();

  return 0;

}

