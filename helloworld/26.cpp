//Write a C++ program that checks that length of two strings are equal or not.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;


    cout << "Enter the first string: ";
    getline(cin, str1); 

    cout << "Enter the second string: ";
    getline(cin, str2); 


    if (str1.length() == str2.length()) {
        cout << "The lengths of the two strings are equal." << endl;
    } else {
        cout << "The lengths of the two strings are not equal." << endl;
    }

    return 0;
}