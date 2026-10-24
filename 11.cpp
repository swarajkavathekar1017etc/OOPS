#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
T subtract(T a, T b)
{
    return a - b;
}

template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

template <typename T>
T division(T a, T b)
{
    return a / b;
}
template <typename T>
class Calculator
{
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void dispRes()
    {
        cout << "Addition = " << add(num1, num2) << endl;
        cout << "Subtraction = " << subtract(num1, num2) << endl;
        cout << "Multiplication = " << multiply(num1, num2) << endl;

        if (num2 != 0)
            cout << "Division = " << division(num1, num2) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main()
{
    cout << "Function Templates:" << endl;
    cout << "Addition = " << add<float>(5.3f, 5.3f) << endl;
    cout << "Subtraction = " << subtract<float>(5.2f, 4.1f) << endl;
    cout << "Multiplication = " << multiply<float>(5.0f, 2.0f) << endl;
    cout << "Division = " << division<float>(10.0f, 2.0f) << endl;
    cout << "\nClass Templates - Integer Calculator:" << endl;
    Calculator<int> i(6, 5);
    i.dispRes();

    cout << "\nClass Templates - Double Calculator:" << endl;
    Calculator<double> d(6.5, 5.2);
    d.dispRes();

    return 0;
