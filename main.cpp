//For now, this program only sums two numbers
#include "mathFormulas.h"
#include "calculator.h"
#include <iostream>

int main()
{
    std::cout << "List of simple things this program can do: \n";
    std::cout << "[1] Calculator\n";
    std::cout << "\nChoose a number: ";
    int x{};
    std::cin >> x;

    if (x == 1)
    {
        std::cout << '\n';
        calculator();
        std::cout << '\n';
    }
    else
    {
        std::cout << '\n';
        std::cout << "I still haven't implemented this :/\n";
    }


    return 0;
}
