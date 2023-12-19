#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    std::string fname;
    std::cout<<"Input the name of the file: "<<endl;
    std::cin>>fname;

    std::ofstream ofile(fname);
    if(!ofile)
    {
        std::cout<<"Error opening file"<<endl;
    }
    else{
        ofile.open(fname);

    std::string studID;
    while(!ofile.eof())
    {
        std::cout<<"Enter student ID (or an empty string to stop): ";
        std::cin>>studID;

        if (studID.empty())
        {
            return 1;
            break;
        }

        float marks[3];
        for (int i=0;i<3;i++)
        {
            std::cout<<"Enter marks for the three tests: "<<endl;
            ofile<<""<<marks[i];
        }
        ofile<<studID<<""<<marks<<endl;

    }

    }

    ofile.close();

    std::cout<<"Data saved successfully"<<endl;

    return 0;
}
