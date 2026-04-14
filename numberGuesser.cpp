#include "numberGuesser.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

//The program asks for the user to enter a number, then it compares to a randomly
//generated number. If it is the same number, the user wins. If the number is
//different, the expression executes again until the user guesses right

int numGuesser()
{
    std::cout << "----------- NUMBER GUESSER -----------\n";

    //'srand()' expects an unsigned int
    //We use this 'unsigned int' - explicit type cast - to ensure that value is cast to the type unsigned
    srand((unsigned int)time(NULL));

    int num {(rand() % 100) + 1}; //We need a random number for the game. Plus one is used so that our game can go from 1 ~ 100
    int guess {};                 //We need to store the guessed number somewhere!
    int tries {0};                //We want the user to know how many tries they needed to guess right. Makes the game funnier

    //This expression(?) executes again until the user guesses right.
    do
    {
        std::cout << "Enter guess between (1 ~ 100): ";
        std::cin >> guess;
        tries ++;

        if (!guess)
        {
            std::cout << "Error, enter a number!\n";
            std::cout << '\n';
        }
        if (guess > 100)
        {
            std::cout << "This number is higher than 100! >:[ Guess LOWER!\n";
            std::cout << '\n';
        }
        else if (guess < num)
        {
            std::cout << "Guess higher!\n";
            std::cout << '\n';
        }
        else if (guess > num)
        {
            std::cout << "Guess lower!\n";
            std::cout << '\n';
        }
        else
        {
            std::cout << "Correct! number of tries: " << tries << '\n';
            std::cout << '\n';
        }

    } while (guess != num);

    std::cout << "\n------------------------------------";

    return 0;
}
