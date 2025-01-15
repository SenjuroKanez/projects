#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>

class Student {
public:
    std::string name;
    int roll_no;
    std::string key;

    Student(std::string n, int r, std::string k) : name(n), roll_no(r), key(k) {}
};

class Teacher {
public:
    std::string name;
    std::string key;

    Teacher(std::string n, std::string k) : name(n), key(k) {}
};

class SchoolManagementSystem {
public:
    void addStudent(const std::string& name, int roll_no, const std::string& key) {
        students[roll_no] = Student(name, roll_no, key);
        std::cout << "Student added successfully.\n";
    }

    void viewStudent(int roll_no) {
        if (students.find(roll_no) != students.end()) {
            Student s = students[roll_no];
            std::cout << "Name: " << s.name << ", Roll No: " << s.roll_no << ", Key: " << s.key << "\n";
        } else {
            std::cout << "Student not found.\n";
        }
    }

    void addTeacher(const std::string& name, const std::string& key) {
        teachers[key] = Teacher(name, key);
        std::cout << "Teacher added successfully.\n";
    }

    void viewTeacher(const std::string& key) {
        if (teachers.find(key) != teachers.end()) {
            Teacher t = teachers[key];
            std::cout << "Name: " << t.name << ", Key: " << t.key << "\n";
        } else {
            std::cout << "Teacher not found.\n";
        }
    }

private:
    std::map<int, Student> students;
    std::map<std::string, Teacher> teachers;
};

int main() {
    SchoolManagementSystem sms;
    int choice;

    do {
        std::cout << "\n--- School Management System ---\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. View Student\n";
        std::cout << "3. Add Teacher\n";
        std::cout << "4. View Teacher\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, key;
                int roll_no;
                std::cout << "Enter student name: ";
                std::cin >> name;
                std::cout << "Enter roll number: ";
                std::cin >> roll_no;
                std::cout << "Enter key: ";
                std::cin >> key;
                sms.addStudent(name, roll_no, key);
                break;
            }
            case 2: {
                int roll_no;
                std::cout << "Enter roll number: ";
                std::cin >> roll_no;
                sms.viewStudent(roll_no);
                break;
            }
            case 3: {
                std::string name, key;
                std::cout << "Enter teacher name: ";
                std::cin >> name;
                std::cout << "Enter key: ";
                std::cin >> key;
                sms.addTeacher(name, key);
                break;
            }
            case 4: {
                std::string key;
                std::cout << "Enter teacher key: ";
                std::cin >> key;
                sms.viewTeacher(key);
                break;
            }
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
