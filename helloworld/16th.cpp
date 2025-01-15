/*Define an array and print it using pointer.*/
#include <iostream>
using namespace std;

int main() 
{
    int a[5] = {0, 1, 2, 3, 4}; 
    int *p = a;
    cout<<"The array is: ["; 
    for (int i = 0; i < 5; i++) {
        cout <<" "<< *(p + i) ;
        if (i<=3)
        {
        cout<<", ";
        }

    }
    cout <<"]";

    return 0; 
}
