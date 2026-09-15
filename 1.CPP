#include <iostream>
using namespace std;
int main() {
int rows;
cout << "Enter number of rows: ";
cin >> rows;
for (int i = 0; i < rows; i++) {
int num = 1;
for (int j = 0; j < rows - i; j++)
cout << " "; 
for (int k = 0; k <= i; k++) {
cout << num << " ";
num = num * (i - k) / (k + 1);
}
cout << endl;
}
return 0;
}