#include <iostream>
using namespace std;
int main()
{
    int ar[2][2] = {{0}};
    int n = 2;
    cout << "Enter the number of elements in the array\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < n ; j++)
        {
            if(j == 0 )
            {
                ar[i+1][j] = ar[i][j];
            }
            else if(j == n-1)
            {
                ar[i-1][j] = ar[i][j];
            }
            else
            {
               ar[i][j+1] = ar[i][j];     
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}