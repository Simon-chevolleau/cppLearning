#include <iostream>
#include <limits>
#include <stdexcept>

int main()
{
    auto entree_securisee = [](auto & variable) -> void
    {
        while (!(std::cin >> variable))
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
        }
    };

    int jour { 0 };
    std::cout << "Quel jour es-tu né ? ";
    entree_securisee(jour);

    int mois { 0 };
    std::cout << "Quel mois ? ";
    entree_securisee(mois);

    int annee { 0 };
    std::cout << "Quelle année ? ";
    entree_securisee(annee);

    double taille { 0.0 };
    std::cout << "Quelle taille ? ";
    entree_securisee(taille);

    std::cout << "Tu es né le " << jour << "/" << mois << "/" << annee << " et tu mesures " << taille << "m." << std::endl;
    return 0;
}