//Write a function to add 10 in each element of an array using pointers.
#include <iostream>
using namespace std;
int a10(int a[],int l);
int main()
{
    int s;
    cout<<"Enter the size of the array: ";
    cin>> s;
    int *ar = new int[s];
    for(int j =0; j < s; j++){
        cout<<"\nEnter The "<<j + 1<<" Element of list: ";
       cin>>ar[j];
    }
    a10(ar, s)  ;

    delete [] ar;

    ar =nullptr;

    return 0;
}
int a10(int a[],int l)
{   
    int *p = a; 
    cout<< "The array +10 is: ["; 
    for (int i = 0; i < l; i++) 
    {
        cout << *(p + i) + 10;
        if (i != l - 1 )
          cout<<", ";
    }
    cout<<"]"; 
    delete[] p;
    p = nullptr;
    return 0; 
}