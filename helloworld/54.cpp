#include <iostream>
using namespace std;

int main() {
    int x = 3; 
    int y;
    int fuel = 12;
    int drive;
    int booksBought = 4; 
    double discount;

    if (x < 5) {
        y = 10;
    } else {
        y = 20;
    }

    if (fuel >= 10) {
        drive = 150;
    } else {
        drive = 30;
    }

    if (booksBought >= 3) {
        discount = 0.15;
    } else {
        discount = 0.0;
    }

    // Output the results
    cout << "y: " << y << endl;
    cout << "drive: " << drive << endl;
    cout << "discount: " << discount << endl;

    return 0;
}