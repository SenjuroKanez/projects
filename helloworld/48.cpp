#include <iostream>
using namespace std;
int main()
{
    char gender;
    cout <<"Enter your gender M(for male), F for (female): ";
    cin>> gender;
    if (gender == 'M' || gender == 'm')
    {
        cout<< "\nYour gender was recorded Male\n";
    }
    else if(gender == 'F' || gender == 'f')
    {
        cout<<"Your gender was recorded Female\n";
    }
    else
    {
        cout<<"Invalid gender\n";
    }
    return 0;
}