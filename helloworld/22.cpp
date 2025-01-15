//Write a function that calculate the length of a string (using pointer)
#include <iostream>
using namespace std;
int st(const char *s) 
{
  int len = 0;
  while (*s != '\0') 
  {
    len++;
    s++;
  }
  return len;
}

int main() {
  const char *str = "Hello, world!";
  int len = st(str);
  cout << "The length of the string is: " << len << endl;
  return 0;
}
