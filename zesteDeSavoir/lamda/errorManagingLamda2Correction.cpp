#include <iostream>
#include <limits>

int main()
{
    auto entree_securisee = [](auto &variable, auto predicat) -> void {
        while (!(std::cin >> variable) || !predicat(variable))
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
                std::cout << "Le prédicat n'est pas respecté !" << std::endl;
            }
        }
    };

    int jour{0};
    std::cout << "Quel jour es-tu né ? ";
    entree_securisee(jour, [](int jour) -> bool { return jour > 0 && jour <= 31; });

    int mois{0};
    std::cout << "Quel mois ? ";
    entree_securisee(mois, [](int mois) -> bool { return mois > 0 && mois <= 12; });

    int annee{0};
    std::cout << "Quelle année ? ";
    entree_securisee(annee, [](int annee) -> bool { return annee > 1900; });

    double taille{0.0};
    std::cout << "Quelle taille ? ";
    entree_securisee(taille, [](double taille) -> bool { return taille > 0.0; });

    std::cout << "Tu es né le " << jour << "/" << mois << "/" << annee << " et tu mesures " << taille << "m." << std::endl;
    return 0;
}