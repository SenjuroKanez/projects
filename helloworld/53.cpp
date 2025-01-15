#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 5, z;
    z = (x >= y) ? (x - y) : (y - x);
    cout << "z: " << z << endl;

    double hours = 45.0, wages;
    wages = (hours >= 40.0) ? (40 * 7.50 + 1.5 * 7.5 * (hours - 40)) : (hours * 7.50);
    cout << "wages: " << wages << endl;

    int score = 75;
    string str;
    str = (score >= 60) ? "Pass" : "Fail";
    cout << "str: " << str << endl;
}