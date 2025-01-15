#include <iostream>
using namespace std;
int main()
{
    int x = 100;
    int y = 200;
    if (x > 100 && y<= 200)
    {
        cout << x <<" "<< y <<" "<< x + y<<endl;
    }
    else 
    {
        cout << x << " " << y << " " << 2 * x - y << endl;
    }
    return 0;
}
/*
Output: 100 200 0
*/