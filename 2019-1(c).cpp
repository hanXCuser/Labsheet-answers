#include<iostream>
using namespace std;

int main()
{
    const int temp_per_day = 3;
    const int days = 7;

    float arrayTemp[days][temp_per_day];

    float min_Temp = 1000.0, max_Temp = -1000.0, sum = 0.0;
    float meanTemp;

    for (int i = 1; i <= days; i++){

        for(int j = 1; j <= temp_per_day; j++){
            cout<<"Enter the temperature "<<j<<" for day "<<i<<" : ";

                cin>>arrayTemp[i][j];
                if (arrayTemp[i][j] < min_Temp){
                    min_Temp = arrayTemp[i][j];
                }
                else if (arrayTemp[i][j] > max_Temp){
                    max_Temp = arrayTemp[i][j];
                }
                sum += arrayTemp[i][j];

        }
    }
    meanTemp = sum/(days*temp_per_day);

    cout<<"The minimum temperature for the week is "<<min_Temp<<endl;
    cout<<"The maximum temperature for the week is "<<max_Temp<<endl;
    cout<<"The mean temperature for the week is "<<meanTemp<<endl;

    return 0;
}
