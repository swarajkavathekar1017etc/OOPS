#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;

    try
    {
        if(b == 0)
        {
            throw b;  
        }

        c = a / b;
        cout << "Division is: " << c << endl;
    }
    catch(int x)
    {
        cout << "Arithmetic error\n";
        cout << "Divide by: " << x << endl;
    }
    cout << "After Division operation";

    return 0;  
}
