#include <iostream>
using namespace std;

struct Employee 
{
    string firstName;
    string lastName;
    int age;
    string position;
    double salary;
};

int main() 
{

    Employee emp1;
    emp1.firstName = "John";
    emp1.lastName = "Doe";
    emp1.age = 30;
    emp1.position = "Developer";
    emp1.salary = 75000.00;


    Employee emp2;


    emp2 = emp1;

    cout << "Employee 2 Information:" << endl;
    cout << "First Name: " << emp2.firstName << endl;
    cout << "Last Name: " << emp2.lastName << endl;
    cout << "Age: " << emp2.age << endl;
    cout << "Position: " << emp2.position << endl;
    cout << "Salary: " << emp2.salary << endl;

    return 0;
}