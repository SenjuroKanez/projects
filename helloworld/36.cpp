#include <iostream>
#include <windows.h>
using namespace std;
void getCursorPosition() {
    POINT p;
    if (GetCursorPos(&p)) {
        cout << "Cursor Position: (" << p.x << ", " << p.y << ")" << endl;
    } else {
        cerr << "Error getting cursor position." << endl;
    }
}

int main() {
    cout << "Move the cursor to the desired position and press Enter..." << endl;
    cin.get(); // Wait for Enter key press
    getCursorPosition();
    return 0;
}
