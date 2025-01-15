//Write a C++ program that get two strings from users and perform the following operations on it
//strcmp(s1, s2);
//strcpy(s1,s2);
//strcat(s1,s2);
//strlen(s1);
#include <iostream>
#include <cstring> 
using namespace std;

int main() 
{
    
    char s1[40] = "abc";  
    char s2[] = "xyz";

    
    strcpy(s1, s2);
    cout << "After strcpy(s1, s2), s1: " << s1 << endl;

    strcat(s1, "xyz");
    cout << "After strcat(s1, \"xyz\"), s1: " << s1 << endl;
    
    int length = strlen("xyz");
    cout << "Length of \"xyz\": " << length << endl;
    
    int cmpResult = strcmp("abc", "xyz");
    if (cmpResult == 0) {
        cout << "\"abc\" and \"xyz\" are equal." << endl;
    } else if (cmpResult < 0) {
        cout << "\"abc\" is less than \"xyz\"." << endl;
    } else {
        cout << "\"abc\" is greater than \"xyz\"." <<endl;
    }

    return 0;
}