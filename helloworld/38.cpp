/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the file in append mode
    ofstream file("C:\\Users\\GALLANT LAPTOPS\\Documents\\arx.txt", ios::app);

    // Check if the file was opened successfully
    if (file.is_open()) {
        // Write a line to the file
        file << "This is a new line added to the file." << endl;

        // Close the file
        file.close();
        cout << "Data written to the file successfully." << endl;
    } else {
        cerr << "Unable to open the file." << endl;
    }

    return 0;
}
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the file for reading
    ifstream file("C:\\Users\\GALLANT LAPTOPS\\Documents\\arx.txt");

    // Check if the file was opened successfully
    if (file.is_open()) {
        string line;

        // Read the file line by line
        while (getline(file, line)) {
            cout << line << endl; // Print each line to the console
        }

        // Close the file
        file.close();
    } else {
        cerr << "Unable to open the file." << endl;
    }

    return 0;
}