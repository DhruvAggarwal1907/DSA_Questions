#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col, i, j, k;
    cout << "Enter the number of row: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;

    if(row!=col){
        cout<<"Multiplication not Possible..!!!";
        return 0;
    }

    int a[row][col], b[row][col], mul[row][col];

    cout << "Enter the first matrix element: "<<endl;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter the second matrix element: "<<endl;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            cin >> b[i][j];
        }
    }

    cout << "Multiply of the matrix: "<<endl;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            mul[i][j] = 0;
            for (k = 0; k < col; k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout<<endl<<endl;

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            cout << mul[i][j] << " ";
        }
        cout << "\n";
    }
}