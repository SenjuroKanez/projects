#include <iostream>
#include <iomanip>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    int age;
    string position;
    double salary;
};

void printLine() {
    cout << "--------------------------------------------------" << endl;
}

void printHeader() {
    printLine();
    cout << "| " << left << setw(10) << "First Name" 
         << "| " << left << setw(10) << "Last Name" 
         << "| " << left << setw(5) << "Age" 
         << "| " << left << setw(15) << "Position" 
         << "| " << left << setw(10) << "Salary" << " |" << endl;
    printLine();
}

void printEmployee(const Employee& e) {
    cout << "| " << left << setw(10) << e.firstName 
         << "| " << left << setw(10) << e.lastName 
         << "| " << left << setw(5) << e.age 
         << "| " << left << setw(15) << e.position 
         << "| " << left << setw(10) << fixed << setprecision(2) << e.salary << " |" << endl;
}

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
    printHeader();
    for (int i = 0; i < 10; ++i) {
        printEmployee(employees[i]);
        printLine();
    }

    return 0;
}