#include <iostream>

namespace P1
{
    int add(int m, int n)
    {
        return m + n;
    }
}

namespace P2
{
    int subtract(int m, int n)
    {
        return m - n;
    }
}

int main()
{
   
    std::cout << "Addition = ";
    std::cout << P1::add(5, 5) <<std::endl;

    std::cout << "Subtraction = ";
    std::cout << P2::subtract(5, 2);
   
    return 0;
}
