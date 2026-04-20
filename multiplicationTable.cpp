#include <iostream>
// The goal of this file is making a multiplication table

// We get the input from the user, then we multiply it for each number until we
//get to the number multiplied by 10

int multiTable()
{
    std::cout << "----------- MULTIPLICATION TABLE ---------\n\n";

    //We need a number to be multiplied
    int number{};
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << '\n';

    //We need to multiply continuously to generate the table
    int multiplier{};
    for (multiplier = 1; multiplier <= 10; multiplier++)
    {
        std::cout << number << " * " << multiplier << " = " << (number * multiplier) << '\n';
    }

    std::cout << "\n------------------------------------------\n";

    return 0;
}
