#include <iostream>

int main()
{
    std::cout << "Please enter a number and I'll display the odd numbers from 0 to your number" << std::endl;
    unsigned int number;
    while (!(std::cin >> number))
    {
        std::cout << "Please enter a positive number to continue" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    for (unsigned int i{0}; i != number; i++)
    {
        if ((i % 2) == 0)
        {
            continue;
        }
        std::cout << i << " ";
    }
}