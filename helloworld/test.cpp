#include <iostream>
using namespace std;
int len(const char *str)
{
    int lent = 0;
    while(*str != '\0')
    {
        lent++;
        str++;
    }
    return lent;
}
int main()
{
    const char *str = "G huzoooor";
    int lenth = len(str);
    cout << "\nString lenth is : "<<lenth;
    return 0;
}