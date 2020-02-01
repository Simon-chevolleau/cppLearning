#include <iostream>

int main()
{
    auto secureCin{[](auto &parameter) -> void}
    {
        while (!(std::cin >> parameter))
        {
            if (std::cin.eof())
            {
                std::cout << "Flux has been closed" << std::endl;
            }
            else if (std::cin.fail())
            {
                std::cout << "Invalid input" << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits < std::streamsize::max(), '\n'); //Ignore all characters
            }
        }
    }
    int jour{0};
    std::cout << "Quel jour es-tu né ? ";
    secureCIn(jour);

    int mois{0};
    std::cout << "Quel mois ? ";
    secureCIn(mois);

    int annee{0};
    std::cout << "Quelle année ? ";
    secureCIn(annee);

    double taille{0.0};
    std::cout << "Quelle taille ? ";
    secureCIn(taille);

    std::cout << "Tu es né le " << jour << "/" << mois << "/" << annee << " et tu mesures " << taille << "m." << std::endl;
    return 0;
}
