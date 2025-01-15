#include <iostream>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    int age;
    string position;
    double salary;
};

int main() {
    Employee employees[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        cout << "First Name: ";
        cin >> employees[i].firstName;
        cout << "Last Name: ";
        cin >> employees[i].lastName;
        cout << "Age: ";
        cin >> employees[i].age;
        cout << "Position: ";
        cin.ignore();
        getline(cin, employees[i].position);
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << endl;
    }

    cout << "Employee Information:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Employee " << i + 1 << ":" << endl;
        cout << "First Name: " << employees[i].firstName << endl;
        cout << "Last Name: " << employees[i].lastName << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Position: " << employees[i].position << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }

    return 0;
}