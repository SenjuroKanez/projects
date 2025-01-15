//Write a program that declares 3 pointers of type float. Initialize these pointers using three float variables. Assign values to data variables using pointer notation. 
//Compute the sum of variables and print the result?
#include <iostream>
using namespace std;

int main() 
{
  float num1, num2, num3;

  float *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3;

  *ptr1 = 0.22;
  *ptr2 = 9.9; 
  *ptr3 = 9.00;
  
  float sum = *ptr1 + *ptr2 + *ptr3;

  cout<<"Sum of variables: "<< sum;

  return 0;
}
