#include <iostream>
using namespace std;

int main() {
    double overSpeed;
    double fine;

    cout << "Enter the overspeed value: ";
    cin >> overSpeed;

    if (overSpeed > 0 && overSpeed <= 5) {
        fine = 20.00;
    } else if (overSpeed > 5 && overSpeed <= 10) {
        fine = 75.00;
    } else if (overSpeed > 10 && overSpeed <= 15) {
        fine = 150.00;
    } else if (overSpeed > 15) {
        fine = 150.00 + 20.00 * (overSpeed - 15);
    } else {
        fine = 0.00; 
    }

    cout << "The fine is $" << fine << endl;

    return 0;
}