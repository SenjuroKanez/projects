#include <iostream>
using namespace std;
int main()
{
    int jj[5][5] = {0};
    cout<< "Enter the digits in an array of 5 x 5 size";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"\nElement no: ["<< i<<"]"<<"["<<j<<"]";
            cin>>jj[i][j];
        }
        
    }
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<jj[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    //OR 
    int j[5][5] = { {1, 1, 1, 1, 1}, 
                    {2, 2, 2, 2, 2}, 
                    {3, 3, 3, 3, 3}, 
                    {4, 4, 4, 4, 4}, 
                    {5, 5, 5, 5, 5} };
   
    for (int t = 0; t < 5; t++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout<<j[t][y];
        }
        cout<<endl;
    }
    return 0;
    
   
}