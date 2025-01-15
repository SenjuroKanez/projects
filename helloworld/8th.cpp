#include <iostream>

using namespace std;

int main() {
    int r, c;


    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;


    int matrix1[r][c], matrix2[r][c], sum[r][c];


    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix2[i][j];
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    cout << "The sum of the matrices is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
