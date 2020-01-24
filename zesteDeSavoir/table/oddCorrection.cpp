#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const entiers{ 5, -2, 74, 455, -12, 10, 11 };
    std::vector<int> pairs {};
    std::vector<int> impairs {};

    for (auto const entier : entiers)
    {
        if (entier % 2 == 0)
        {
            pairs.push_back(entier);
        }
        else
        {
            impairs.push_back(entier);
        }
    }

    std::cout << "Les pairs sont : " << std::endl;
    for (int const entier_pair : pairs)
    {
        std::cout << entier_pair << std::endl;
    }

    std::cout << std::endl << "Les impairs sont : " << std::endl;
    for (int const entier_impair : impairs)
    {
        std::cout << entier_impair << std::endl;
    }
    
    return 0;
}