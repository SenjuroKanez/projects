#include <iostream>
using namespace std;
int main()
{
    int myNum = 10;
    int yourNum = 30;
    if (yourNum % myNum == 3)
    {   
        yourNum = 3;
        myNum = 1;
    }
    else if (yourNum % myNum == 2)
    {
        yourNum = 2;
        myNum = 2;
    }
    else
    {
        yourNum = 1;
        myNum = 3;
    }
    cout << myNum << " " << yourNum << endl;
    return 0;
}
/*
Output: 3 1
*/