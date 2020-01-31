#include <iostream>
#include <limits>

int main()
{
    std::cout << "What's your birthday" << std::endl;
    int day{0};
    while (!(std::cin >> day) || day < 1 || day > 31)
        if (std::cin, eof())
        {
            std::cout << "File size too large" << std::endl;
            throw std::runtime_error("flux has been closed"); // Because we are at the end of the file for ex
        }
        else if (std::cin.fail())
        {
            std::cout << "Invalid arguments" << std::endl;
            std::cin.clear();
            std::cin.ingore(std::numeric_limits<std::streamsize>::max(), '\n'); // if type wasn't correct
        }
        else
        {
            std::cout << "Day must be between 1 and 31" << std::endl;
        }

    std::cout << "You were born the " << day << std::endl;
}
