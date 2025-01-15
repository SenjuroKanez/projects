#include <iostream>
using namespace std;
struct name{
    string fn, ln;
};
struct DOB{
    int day, month, year;
};
struct city{
    string city, state, country;
};
struct comp{
    string designa;
    int sala;
};
struct emp{
    name n;
    DOB d;
    city c;
    comp co;
};
int main ()
{
    emp a;
    a.n.fn = "Ali";
    a.n.ln = "Junejo";
    a.d.day = 12;
    a.d.month = 12;
    a.d.year = 1999;
    a.c.city = "Karachi";
    a.c.state = "Sindh";
    a.c.country = "Pakistan";
    a.co.designa = "Manager";
    a.co.sala = 50000;
    cout << "First Name: " << a.n.fn << endl;
    cout << "Last Name: " << a.n.ln << endl;
    cout << "Date of Birth: " << a.d.day << "/" << a.d.month << "/" << a.d.year << endl;
    cout << "City: " << a.c.city << endl;
    cout << "State: " << a.c.state << endl;
    cout << "Country: " << a.c.country << endl;
    cout << "Designation: " << a.co.designa << endl;
    cout << "Salary: " << a.co.sala << endl;
    return 0;
}