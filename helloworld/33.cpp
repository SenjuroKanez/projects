#include <iostream>
using namespace std;

int disum(int ar[][100], int n);

int main() {
    int n;
    cout << "Enter the number of elements in the array\n";
    cin >> n;
    int ar[100][100]; // Assuming a maximum size of 100x100 for simplicity
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ar[i][j];
        }
    }
    cout << "Sum of diagonals: " << disum(ar, n) << endl;
    return 0;
}

int disum(int ar[][100], int n) {
    int sum = 0, sum1 = 0;
    for (int i = 0; i < n; i++) {
        sum += ar[i][i]; // Primary diagonal
        if (i != n - i - 1) {
            sum1 += ar[i][n - i - 1]; // Secondary diagonal
        }

    }
    sum = sum - sum1;
    return sum;
}