#include <iostream>
#include <windows.h>
using namespace std;
void clickAt(int x, int y) {
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}
void typeMessage(const std::string& message) {
    for (char c : message) {
        SHORT vk = VkKeyScan(c);
        keybd_event((BYTE)vk, 0, 0, 0);
        keybd_event((BYTE)vk, 0, KEYEVENTF_KEYUP, 0);
    }
}
int main() {
    // Coordinates for the text box and send button
    int textBoxX = 870, textBoxY = 792;
    int sendButtonX = 1500, sendButtonY = 792;
    for(int i =0; i <= 50; i++)
    {
    // Click the text box
    clickAt(textBoxX, textBoxY);
    Sleep(300); // Wait for half a second

    // Type the message
    string message = "Oi";
    typeMessage(message);
    Sleep(600); // Wait for half a second

    // Click the send button
    clickAt(sendButtonX, sendButtonY);
    }
    cout << "Message sent!" << endl;
    return 0;
}
