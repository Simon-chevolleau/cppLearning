#include <iostream>

int main()
{
    std::cout << "Please enter your number and I'll guess if it's a prime number or not" << std::endl;
    unsigned int number;
    while (!(std::cin >> number))
    {
        std::cout << "Please enter a positive number to continue" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    unsigned int i{2};
    bool notPrime{false};
    while (i != number)
    {
        if (number % i == 0)
        {
            notPrime = true;
            break;
        }
        i++;
    }
    if (notPrime)
    {
        std::cout << "Your number isen't a prime number" << std::endl;
    }
    else
    {
        std::cout << "Your number is a prime number" << std::endl;
    }
}