/*This program is able to:
1 - Work as a calculator to calculate just one number
2 - Check if a number is either even or odd
3 - Make a game where you need to guess if a number is right
4 - Make a multiplication table of some number
*/
#include "mathFormulas.h"
#include "calculator.h"
#include "evenOrOdd.h"
#include "numberGuesser.h"
#include "multiplicationTable.h"
#include <iostream>

#define NEW_THING

int main()
{

#ifdef NEW_THING
    std::cout << "List of simple things this program can do: \n";
    std::cout << "[1] Calculator\n";
    std::cout << "[2] Even or odd checker\n";
    std::cout << "[3] Number Guesser game\n";
    std::cout << "[4] Multiplication table\n";
    std::cout << "\nChoose a number: ";
    int x{};
    std::cin >> x;

    if (x == 1)
    {
        std::cout << '\n';
        calculator();
        std::cout << '\n';
    }
    else if (x == 2)
    {
        std::cout << '\n';
        evenOdd();
        std::cout << '\n';
    }
    else if (x == 3)
    {
        std::cout << '\n';
        numGuesser();
        std::cout << '\n';
    }
    else if (x == 4)
    {
        std::cout << '\n';
        multiTable();
        std::cout << '\n';
    }
    else
    {
        std::cout << '\n';
        std::cout << "I still haven't implemented this :/\n";
    }
#endif // NEW_THING

    return 0;
}
