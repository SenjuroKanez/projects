#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
// Remove the file named "myfile.txt"
int status = remove("myfile.txt");
// Check if the file has been successfully removed
if (status != 0) {
perror("Error deleting file");
}
else {
cout << "File successfully deleted" << endl;
}
return 0;
}