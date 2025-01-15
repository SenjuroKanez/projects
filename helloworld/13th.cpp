#include <iostream>
using namespace std;

int natsu(int n);
double natsu(double n);
int main ()
{
    char v;
    
    cout <<"if you require the sum of an array enter a for sum of natural numbers enter n: ";
    cin >> v;
    if(v == 'n')
    {
    cout <<"Enter the number upto which sum of natural number is required: \n";
    int a;
    cin>>a;
    cout<<"the sum upto "<<a<<" is : "<<natsu(a)<<endl;
    }
    else if( v == 'a')
    {
        cout << "Enter the size of the array: ";
        int size;
        cin >> size;
        cout << "Enter the elements of the array:\n";
        
        cout << "The sum of the array is: " << arsum(size) << endl;
    }
}
int natsu(int n )
{
    int sum =0;
    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}
double natsu(double n)
{
    double sum =0;
    static_cast <n>
    double arr[n]; 
    for ( int i =0 ; i < n; i++ )
    {
        cin>>arr[i];
    }

    for ( int i =0 ; i < n; i++ )
    {
    
     
        sum += arr[i];
    }
    return sum;
}
