/*This program is able to:
1 - Work as a calculator to calculate just one number
2 - Check if a number is either even or odd
*/
#include "mathFormulas.h"
#include "calculator.h"
#include "evenOrOdd.h"
#include <iostream>

int main()
{
    std::cout << "List of simple things this program can do: \n";
    std::cout << "[1] Calculator\n";
    std::cout << "[2] Even or odd checker\n";
    std::cout << "\nChoose a number: ";
    int x{};
    std::cin >> x;

    if (x == 1)
    {
        std::cout << '\n';
        calculator();
        std::cout << '\n';
    }
    if (x == 2)
    {
        std::cout << '\n';
        evenOdd();
        std::cout << '\n';
    }
    else
    {
        std::cout << '\n';
        std::cout << "I still haven't implemented this :/\n";
    }


    return 0;
}
