#include <iostream>

using namespace std;

int main() {
    double backyard;
    double fertilizingCharges;

    
    backyard = 3000;
    fertilizingCharges = (0 < backyard && backyard <= 5000) ? 40.00 : 40.00 + (backyard - 5000) * 0.01;
    cout << "For backyard = 3000, fertilizingCharges = " << fertilizingCharges << endl;

    backyard = 5000;
    fertilizingCharges = (0 < backyard && backyard <= 5000) ? 40.00 : 40.00 + (backyard - 5000) * 0.01;
    cout << "For backyard = 5000, fertilizingCharges = " << fertilizingCharges << endl;

    backyard = 6500;
    fertilizingCharges = (0 < backyard && backyard <= 5000) ? 40.00 : 40.00 + (backyard - 5000) * 0.01;
    cout << "For backyard = 6500, fertilizingCharges = " << fertilizingCharges << endl;

    return 0;
}