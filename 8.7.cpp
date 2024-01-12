#include<iostream>
using namespace std;

char grade(int mark)
{
    if (mark >= 70){
        return 'A';
    }
    else if (mark >= 60 && mark < 70){
        return 'B';
    }
    else if (mark >= 50 && mark < 60){
        return 'C';
    }
    else if (mark >= 40 && mark < 50){
        return 'D';
    }
    else{
        return 'F';
    }
}

int main()
{
    int mark;
    cout<<"Enter the mark of the student: ";
    cin>>mark;

    cout<<"The grade of the student is "<<grade(mark);

}
