#include <iostream>

int main()
{
    std::cout << "Donne-moi un nombre, je t'afficherai tous les nombres impairs jusqu'à ce nombre : ";
    int maximum { 0 };
    std::cin >> maximum;

    for (int i { 0 }; i <= maximum; ++i)
    {
        if (i % 2 == 0)
        {
            // On saute ce nombre puisqu'il est pair.
            continue;
        }

        std::cout << i << std::endl;
    }

    return 0;
}