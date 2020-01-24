#include <iostream>

int main()
{
    std::cout << "Bienvenue à la laverie de Clem. Combien de kilos de linge as-tu ? ";
    int kilos{0};
    std::cin >> kilos;

    if (kilos <= 5)
    {
        std::cout << "Tu as peu de linge, mets-le dans une machine de 5kg." << std::endl;
    }
    else if (kilos <= 10)
    {
        std::cout << "Tu as beaucoup de linge, mets-le dans une machine de 10kg." << std::endl;
    }
    else
    {
        // On a plus que 10 kilos, il va falloir diviser le linge en plusieurs machines.
        std::cout << "Dites donc, il faut laver son linge plus souvent !" << std::endl;

        int nb_machines_10_kilos{0};

        while (kilos > 5)
        {
            // Pour chaque machine de 10kg utilisée, on enlève 10kg au total de linge restant.
            kilos -= 10;
            ++nb_machines_10_kilos;
        }

        std::cout << "Tu as besoin de " << nb_machines_10_kilos << " machine(s) de 10kg." << std::endl;
        if (kilos >= 0)
        {
            // S'il reste entre 0 et 5 kilos, il ne faut pas oublier la dernière machine de 5kg.
            std::cout << "Le reste rentrera dans une machine de 5kg." << std::endl;
        }
    }

    return 0;
}