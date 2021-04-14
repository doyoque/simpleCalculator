// simpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Hello World!\n";
    std::cout << "Please enter the operation to perform. Format: a+b | a:b | a*b | a-b" << std::endl;

    Calculator calc;

    while (true)
    {
        std::cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            std::cout << "Divison by 0 exception" << std::endl;
            continue;
        } else {
            result = calc.Calculate(x, oper, y);
        }
        
        std::cout << "Result is: " << result << std::endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
