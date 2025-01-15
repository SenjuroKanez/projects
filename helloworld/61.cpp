#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("city.txt");
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    string city;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter the name of city " << (i + 1) << ": ";
        getline(cin, city);
        outFile << city << endl;
    }

    outFile.close();
    cout << "City names have been written to city.txt" << endl;

    return 0;
}