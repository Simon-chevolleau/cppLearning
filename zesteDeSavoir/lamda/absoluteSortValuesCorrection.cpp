#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> nombres{-8, 5, 97, -789, 0, 87, -88, -8555, 10000, 3};
    std::sort(std::begin(nombres), std::end(nombres), [](int a, int b) -> bool {
        return std::abs(a) < std::abs(b);
    });

    // Affichons pour vérifier.
    for (int nombre : nombres)
    {
        std::cout << nombre << std::endl;
    }

    return 0;
}
