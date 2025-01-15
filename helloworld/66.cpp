#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createStudentFile(const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        cout << "Student file created successfully.\n";
        file.close();
    } else {
        cerr << "Error creating student file.\n";
    }
}

void writeStudentNames(const string& filename, const string& name) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << "Name: " << name << "\n";
        cout << "Student name written to file.\n";
        file.close();
    } else {
        cerr << "Error writing to student file.\n";
    }
}

void appendStudentAge(const string& filename, int age) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << "Age: " << age << "\n";
        cout << "Student age appended to file.\n";
        file.close();
    } else {
        cerr << "Error appending to student file.\n";
    }
}

void createDuplicateFile(const string& original, const string& duplicate) {
    ifstream src(original, ios::binary);
    ofstream dest(duplicate, ios::binary);
    if (src.is_open() && dest.is_open()) {
        dest << src.rdbuf();
        cout << "Duplicate file created successfully.\n";
        src.close();
        dest.close();
    } else {
        cerr << "Error creating duplicate file.\n";
    }
}

void deleteStudentFile(const string& filename) {
    if (remove(filename.c_str()) == 0) {
        cout << "Student file deleted successfully.\n";
    } else {
        cerr << "Error deleting student file.\n";
    }
}

int main() {
    string filename = "student.txt";
    string duplicateFilename = "student2.txt";

    createStudentFile(filename);
    writeStudentNames(filename, "John Doe");
    appendStudentAge(filename, 20);
    createDuplicateFile(filename, duplicateFilename);
    deleteStudentFile(filename);

    return 0;
}