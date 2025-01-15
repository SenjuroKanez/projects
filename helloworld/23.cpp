//Write a program that swap two numbers using pointers.
#include <iostream>
using namespace std;
void swap(int* a, int* b) 
{
    int temp = *a;  
    *a = *b;        
    *b = temp;     
}

int main() 
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "num1 = " << num1 << ", num2 = " << num2 <<endl;

    
    swap(&num1, &num2);

    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

