//For now, this program only sums two numbers

#include "mathFormulas.h"
#include <iostream>

int main()
{
    std::cout << "Choose an number: ";
    int x{};
    std::cin >> x;

    std::cout << "Choose an number: ";
    int y{};
    std::cin >> y;

    std::cout << "The sum of these two numbers is: " << add(x, y) << '\n';

    return 0;
}
