#include <iostream>

int main()
{
    std::cout << "Quelle heure est-il ?" << std::endl;
    int heure{0};
    std::cin >> heure;

    if (heure > 0 && heure < 7)
    {
        std::cout << "Zzz..." << std::endl;
    }
    else if (heure >= 7 && heure < 12)
    {
        std::cout << "C'est le matin !" << std::endl;
    }
    else if (heure == 12)
    {
        std::cout << "Il est midi !" << std::endl;
    }
    else if (heure > 12 && heure < 18)
    {
        std::cout << "C'est l'après-midi !" << std::endl;
    }
    else if (heure >= 18 && heure < 24)
    {
        std::cout << "C'est le soir !" << std::endl;
    }
    else if (heure == 24 || heure == 0)
    {
        std::cout << "Il est minuit, dormez brave gens !" << std::endl;
    }
    else
    {
        std::cout << "Il est l'heure de réapprendre à lire l'heure !" << std::endl;
    }

    return 0;
}
