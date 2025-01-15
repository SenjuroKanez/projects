#include <iostream>
using namespace std;

int main() {
    int alpha;
    cin >> alpha;

    switch (alpha) {
        case 1:
        case 2:
            alpha = alpha + 2;
            break;
        case 4:
            alpha++;
            break;
        case 5:
            alpha = 2 * alpha;
            break;
        case 6:
            alpha = alpha + 5;
            break;
        default:
            alpha--;
    }

    cout << "alpha: " << alpha << endl;
    return 0;
}