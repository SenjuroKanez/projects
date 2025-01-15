#include <iostream>
using namespace std;
int main()
{                     
    int m[2][2] = { {2, 2},
                    {4, 4}};
    
    for (int i = 0; i < 2; i++)
    {
        for(int k = 0 ; k < 2; k++)
        {
            cout<<m[i][k]<<" ";
        }
        cout<<endl;
    }
    

}



/*      
        1  1
        1  1
        */