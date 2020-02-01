#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<int> negativeNumbers{-1, -2, -3, -6, -6, -4, -65};
    std::sort(std::begin(negativeNumbers), std::endl(negativeNumbers), [](int a, int b) -> bool {
        return std::abs(a) < std::abs(b);
    });
    std::vector<int>::iterator beginVector{std::begin(negativeNumbers)};
    // could be auto beginVector{std::begin(negativeNumbers)};
    for (iterator; iterator <= negativeNumbers.size(); iterator++)
    {
        std::cout << *iterator << std::endl;
    }
}