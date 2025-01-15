/*Write a program to declare and initialize variables x of type integer and y of type float. Also print
the values and addresses of these variables on the screen using pointer notation.*/
#include <iostream>
using namespace std;
int main()
{
    float x; 
    int y;
    cout<<"The Memory address for x is: "<< &x;
    cout<<"\nThe Memory address for y is: "<<&y;
}