#include <iostream>

int main()
{
    std::cout << "Donne-moi un nombre, je te dirai s'il est premier : ";
    int nombre{0};
    std::cin >> nombre;

    bool est_premier{true};
    for (int i{2}; i < nombre; ++i)
    {
        if (nombre % i == 0)
        {
            // Si i divise nombre, alors nous savons que nombre n'est pas premier.
            est_premier = false;
            break;
        }
    }

    if (est_premier)
    {
        std::cout << nombre << " est un nombre premier !" << std::endl;
    }
    else
    {
        std::cout << nombre << " n'est pas premier." << std::endl;
    }

    return 0;
}