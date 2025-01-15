//Write a program that swap two numbers using pointers.
#include <iostream>

using namespace std;

void l(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "Before swapping: " << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    
    l(&num1, &num2);

    
    cout << "After swapping: " << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}
