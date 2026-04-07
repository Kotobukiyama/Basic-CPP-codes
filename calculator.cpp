#include <iostream>
//This file is for the calculator of this simple project

int calculator()
{
    std::cout << "----------- CALCULATOR -----------\n";

    //We wanna know witch operation the user wants
    std::cout << "Choose between +, -, *, /: ";
    char op{};
    std::cin >> op;

    //First, we need to get our numbers
    std::cout << "Enter first number: ";
    double num1{};
    std::cin >> num1;
    std::cout << "enter second number: ";
    double num2{};
    std::cin >> num2;

    //We need to set conditions for the operations
    //I used switch because a chat bot said it would be the best option for this situation
    //So, as a beginner, I followed it
    double result{};
    switch(op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result is: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result is: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result is: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result is: " << result << '\n';
        break;
    default:
        std::cout << "That wasn't a valid response! >:(\n";
        break;
    }

    std::cout << "----------------------------------";

    return 0;
}
