#include <iostream>
#include <limits>

int main()
{
    std::cout << "Quel jour es-tu né ? ";
    int jour{0};
    while (!(std::cin >> jour) || jour < 1 || jour > 31)
    {
        if (std::cin.eof())
        {
            // Dans le cas où le flux est fermé, on renvoie une exception.
            throw std::runtime_error("Le flux a été fermé !");
        }
        else if (std::cin.fail())
        {
            // En cas d'entrée invalide.
            std::cout << "Entrée invalide. Recommence." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            // Cas où l'entrée n'est pas correcte.
            std::cout << "Le jour doit être compris entre 1 et 31." << std::endl;
        }
    }

    std::cout << "Quel mois es-tu né ? ";
    int mois{0};
    while (!(std::cin >> mois) || mois < 1 || mois > 12)
    {
        if (std::cin.eof())
        {
            throw std::runtime_error("Le flux a été fermé !");
        }
        else if (std::cin.fail())
        {
            std::cout << "Entrée invalide. Recommence." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "Le mois doit être compris entre 1 et 12." << std::endl;
        }
    }

    std::cout << "Tu es né le " << jour << "/" << mois << "." << std::endl;
    return 0;
}