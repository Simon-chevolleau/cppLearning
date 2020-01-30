#include <iostream>
#include <vector>

void moneyDispenser(unsigned int moneyUser, std::vector<unsigned int> moneyAvailable)
{
    for (int i = 0; i < moneyAvailable.size(); i++)
    {
        unsigned int count{0};
        while ((moneyUser / moneyAvailable[i]) > 0)
        {
            count++;
            moneyUser -= moneyAvailable[i];
        }
        if (count > 0)
        {
            std::cout << count << " * " << moneyAvailable[i] << " euros" << std::endl;
        }
    }
}

int main()
{
    std::cout << "Hello, how money do you want?" << std::endl;
    unsigned int moneyUser;
    while (!(std::cin >> moneyUser))
    {
        std::cout << "Please, only enter integer value" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    std::vector<unsigned int> moneyAvailable{500, 200, 100, 50, 20, 10, 5, 2, 1};
    moneyDispenser(moneyUser, moneyAvailable);
}