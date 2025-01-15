#include <iostream>
using namespace std;
int main()
{
    int ar[3][3][3][3] = {0};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                for(int l = 0; l < 3; l++)
                {
                    cin>>ar[i][j][k][l];
                }
            }
        
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++) 
            {
                for(int l = 0; l < 3; l++)
                {
                    cout<<ar[i][j][k][l];
                }
            cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
}
