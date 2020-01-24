#include <iostream>

int main()
{
    std::cout << "Please enter your positive numbers, and I will guess the pgcd" << std::endl;
    unsigned int number1, number2;
    if (std::cin >> number1 >> number2)
    {
        if (number1 < number2)
        {
            unsigned int a = number1;
            number1 = number2;
            number2 = a;
        }

        unsigned int modulo{1};
        if ((modulo = number1 % number2) == 0)
        {
            std::cout << "The pgcd is " << modulo << std::endl;
        }

        while (modulo > 0)
        {
            number1 = number2;
            number2 = modulo;
            modulo = number1 % number2;
        }
        std::cout << "The pgcd is " << number2 << std::endl;
    }
    else
    {
        std::cout << "You must enter positive numbers next time" << std::endl;
    }
}