#include<iostream>
using namespace std;
int main() {
int arr[4][2]; 
cout << "Enter elements for a 2D array (4 rows and 2 columns):\n";

for (int i = 0; i < 4; i++) {
for (int j = 0; j < 2; j++) {
cout << "Enter element for arr[" << i << "][" << j << "]: ";
cin >> arr[i][j];
}
}
cout << "\nPrinting the 2D Array:\n";

for (int i = 0; i < 4; i++) {
for (int j = 0; j < 2; j++) {
cout << arr[i][j] << " ";
}
cout << endl; 
}
return 0;
}