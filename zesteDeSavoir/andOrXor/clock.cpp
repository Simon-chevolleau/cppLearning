#include <iostream>

int main()
{
    std::cout << "When do you wake up ? (you can use 0 to 24h)" << std::endl;
    unsigned int hour;
    if (std::cin >> hour)
    {
        if (hour >= 8 && hour < 12)
        {
            std::cout << "Oh you you're an early bird" << std::endl;
        }
        else if (hour > 12 && hour <= 18)
        {
            std::cout << "God damn! you should think about wake up earlier!" << std::endl;
        }
        else if (hour >= 18 && hour < 24)
        {
            std::cout << "Do you work at night?" << std::endl;
        }
        else if (hour < 8)
        {
            std::cout << "You're definitively more than early bird!" << std::endl;
        }
        else if (hour == 12)
        {
            std::cout << "OH exactly midday!" << std::endl;
        }
        else if (hour == 24 || hour == 0)
        {
            std::cout << "I don't even know if you wake up early or if you sleep very late, different point of view" << std::endl;
        }
        else
        {
            std::cout << "OH! This hour doesn't even exist!" << std::endl;
        }
    }
    else
    {
        std::cout << "I was expecting a positive number!" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }

    return 0;
}