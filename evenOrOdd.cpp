#include <iostream>
//This file is for the "even or odd" checker of this simple project

/*The user enters an integer, then the program checks with the
modulo operator if the number is an even number or an odd number.
We use it because for a number to be even or odd we just need to
know one thing: if it is divisible by two or not, and the operator%
gives us the remainder of the expression
*/
int evenOdd()
{
    std::cout << "----------- EVEN OR ODD -----------\n";

    //We need the user to enter an number in order to check if it is odd or not
    std::cout << "\nEnter an integer: ";
    int num{};
    std::cin >> num;

    //Checking if the number is either even or odd
    //We use the operator% because it gives us the remainder of the expression
    if (num % 2 == 0)
    {
        std::cout << "The number " << num << " is an EVEN number!\n";
    }
    else
    {
        std::cout << "The number " << num << " is an ODD number!\n";
    }

    std::cout << "\n----------------------------------";

    return 0;
}
