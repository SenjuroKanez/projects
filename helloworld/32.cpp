
#include <iostream>
using namespace std;
void stc(int x);
int main ()
{
    int z;
    cout << " Enter the size of the stair case \n";
    cin >> z;
    stc(z);
    return 0;
}
void stc(int x)
{
    for (int i = 1; i <= x; i++)
    {
       for(int j = 1; j <= i; j++)
       {
            cout<<"#";
       } 
       endl(cout);
    }
}