#include <iostream>
using namespace std;
int main()
{
    int a, b;
 
    int *g, *h;
 
    g = &a;
 
    h= &a;
 
    if ( *g == *h)
    {
        cout<<"same address";}
    else
    {
        cout << "different address ";
    }
}