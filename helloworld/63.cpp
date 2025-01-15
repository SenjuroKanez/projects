#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("output.txt");

    outFile << "Line 1: Hello, World!" << endl;
    outFile << "Line 2: Welcome to C++ programming." << endl;
    outFile << "Line 3: This is a simple file I/O example." << endl;
    outFile << "Line 4: We are writing and reading files." << endl;
    outFile << "Line 5: Goodbye!" << endl;

    outFile.close();

    ifstream inFile("output.txt");
    string line;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
