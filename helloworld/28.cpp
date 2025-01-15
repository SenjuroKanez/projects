#include <iostream>
using namespace std;
struct inf{
    string n;
    int a;
    
    char g;
    string o;

};
int main()
{
    string l;
    inf p;
    cout <<"Enter your Name\n";
    getline(cin, p.n);
    cout <<"\nEnter your Age in years\n";
    cin>> p.a;
    cin.ignore();
    cout << "\nEnter your gender\n";
    cin>> p.g;
    cin.ignore();
    cout << "\nEnter your occupation\n";
    getline(cin, p.o);
    cout << "\nName: " << p.n << endl;
    cout << "Age: " << p.a <<" years"<< endl;
    if (p.g == 'm' || p.g == 'M')
    {
        l ="MALE";
    }else{
        l= "Female";
    }
    cout << "Gender: " << l << endl;
    cout << "Occupation: " << p.o << endl;
    return 0;

}