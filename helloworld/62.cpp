#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("test.txt");
    if (!inputFile) {
        cerr << "Unable to open file test.txt";
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
    return 0;
}