#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> const positiveNumbers(3, 10), negativeNumbers{3, -10, 3};
    if (std::any_of(std::cbegin(positiveNumbers), std::cend(positiveNumbers), [](int number) -> bool { return number < 0; }))
    {
        std::cout "One or more numbers is negative" << std::endl;
    }
    else
    {
        std::cout << "All the number are positive" << std::endl;
    }
    if (std::any_of(std::cbegin(negativeNumbers), std::cend(negativeNumbers), [](int number) -> bool { return number < 0; }))
    {
        std::cout "One or more numbers is negative" << std::endl;
    }
    else
    {
        std::cout << "All the number are positive" << std::endl;
    }
}