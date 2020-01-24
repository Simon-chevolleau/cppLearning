#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const entiers { 5, -2, 74, 455, -12 };
    int minimum { entiers[0] };
    int maximum { entiers[0] };

    for (auto const entier : entiers)
    {
        if (entier < minimum)
        {
            minimum = entier;
        }
        
        if (entier > maximum)
        {
            maximum = entier;
        }
    }

    std::cout << "Le minimum est " << minimum << "." << std::endl;
    std::cout << "Le maximum est " << maximum << "." << std::endl;
    
    return 0;
}