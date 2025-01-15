#include <iostream>
#include <windows.h>
#include <string>

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

bool running = false;
HWND hMessageBox, hStartButton, hStopButton;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_COMMAND:
            if ((HWND)lParam == hStartButton) {
                running = true;
                wchar_t message[256];
                GetWindowText(hMessageBox, message, 256);
                std::wstring ws(message);
                std::string messageStr(ws.begin(), ws.end());
                int textBoxX = 870, textBoxY = 792;
                int sendButtonX = 1500, sendButtonY = 792;
                for (int i = 0; i <= 50 && running; i++) {
                    typeMessage(messageStr);
                    Sleep(300);
                    std::wstring ws(message);
                    std::string messageStr(ws.begin(), ws.end());
                    typeMessage(messageStr);
                    Sleep(300);
                    clickAt(sendButtonX, sendButtonY);
                }
                MessageBox(hwnd, L"Messages sent!", L"Info", MB_OK);
            } else if ((HWND)lParam == hStopButton) {
                running = false;
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const wchar_t CLASS_NAME[] = L"AutoClickerWindowClass";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        L"Auto Clicker",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 300, 200,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    hMessageBox = CreateWindow(
        L"EDIT",
        L"",
        WS_CHILD | WS_VISIBLE | WS_BORDER,
        50, 50, 200, 20,
        hwnd,
        NULL,
        hInstance,
        NULL
    );

    hStartButton = CreateWindow(
        L"BUTTON",
        L"Start",
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        50, 80, 75, 25,
        hwnd,
        NULL,
        hInstance,
        NULL
    );

    hStopButton = CreateWindow(
        L"BUTTON",
        L"Stop",
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        150, 80, 75, 25,
        hwnd,
        NULL,
        hInstance,
        NULL
    );

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
