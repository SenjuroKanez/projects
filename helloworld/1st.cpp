#include <iostream>
using namespace std;
int main()
{
    
    int ar[5] = {2, 4, 6, 8, 10};
    int sum = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if ( ar[i] % 4 == 0)
        {
            sum += ar[i];
        }
        else
        {
            sum -= ar[i];
        }

    }
    cout <<"Ki hall e theek na";
    cout<<"\nSum: "<<sum;
    return 0;
}