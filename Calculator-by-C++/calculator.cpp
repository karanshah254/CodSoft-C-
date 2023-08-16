/*

Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.

*/

#include <iostream>

int main()
{
    double num1, num2;
    char operation;
    double result = 0;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Choose the operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation)
    {

    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':

        if (num2 != 0)
        {
            result = num1 / num2;
        }

        else
        {
            std::cout << "Error: Cannot divide by zero." << std::endl;
            return 1;
        }

        break;

    default:
        std::cout << "Error: Invalid operation." << std::endl;
        return 1;
    }

    std::cout << "\n"
              << "| -------> Result == " << result << " <------- |" << std::endl;

    return 0;
}
