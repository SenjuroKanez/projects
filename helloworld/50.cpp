#include <iostream>
using namespace std;
int main() {
    double sale, bonus;

    
    sale = 15000.0;

    if (sale > 20000) {
        bonus = 0.10;
    } else if (sale > 10000 && sale <= 20000) {
        bonus = 0.05;
    } else {
        bonus = 0.0;
    }

    cout << "Sale: " << sale << ", Bonus: " << bonus << endl;

    return 0;
}