#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const nombres{1, 2, 3, 4, 5, 6, -7};

    if (std::any_of(std::cbegin(nombres), std::cend(nombres), [](int nombre) -> bool { return nombre < 0; }))
    {
        std::cout << "Au moins un nombre est négatif." << std::endl;
    }
    else
    {
        std::cout << "Tous les nombres sont positifs." << std::endl;
    }

    return 0;
}
