#include<iostream>
using namespace std;

int printMatrix(int matrix[][5], int row)
{
    for(int i = 0; i < row; i++){
        for(int j = 0; j < 5; j++){
            cout<<matrix[i][j]<<"/t";
        }
        cout<<endl;
    }
}

void inputMatrix(int M[1][5], int n1)
{
    int row, col;

    for(row = 1; row < 2; row++){
        for(col=1; col<6; col++){
            cout<<"Enter the number in "<<row<<" by "<<col<<" : ";
            cin>>M[row][col];
        }
    }

}

void sumMatrix(int M1[][5], int M2[][5], int row)
{
    int col ;
    int sum[row][5];
    for(row = 1; row < 2; row++){
        for(col=1; col<6; col++){
            sum[row][col] = M1[row][col] + M2[row][col];
        }
    }

}

int main()
{
    int n;
    int A[n][5], B[n][5];
    cout<<"Input the number of rows in the matrix: ";
    cin>>n;

    cout<<"Input the number in the matrix A: "<<endl;
    inputMatrix(A, n);

    cout<<"Input the number in the matrix B: "<<endl;
    inputMatrix(B, n);

    int C = printMatrix(A, n);
    int D = printMatrix(B, n);

    cout<<"The sum of matrix A "<<C<<" and matrix B "<<D<<" is: "<<endl;
    sumMatrix(A ,B ,n );

    return 0;
}











