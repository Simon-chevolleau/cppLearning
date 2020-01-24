#include <iostream>

int main()
{
    std::cout << "Which day are your born ? " << std::endl;
    unsigned int day{0};
    while (!(std::cin >> day))
    {
        std::cout << "Please enter a positive day" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    std::cout << "Which month are your born ? " << std::endl;
    int month{0};
    while (!(std::cin >> month))
    {
        std::cout << "Please enter a positive month" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }

    std::cout << "You are born " << day << "/" << month << "." << std::endl;
}