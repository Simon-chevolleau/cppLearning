#include <iostream>
#include <limits>
#include <stdexcept>

int main()
{
    auto entree_securisee = [](auto &variable, auto fonction) -> void {
        while (!(std::cin >> variable) || !fonction(variable))
        {
            if (std::cin.eof())
            {
                throw std::runtime_error("Flux has been stopped !");
            }
            else if (std::cin.fail())
            {
                std::cout << "Invalid input" << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else
            {
                std::cout << "predicat incorrect" << std::endl;
            }
        }
    };
    auto predicat
    {
        [](auto variable, auto paramater1, auto parameter2) -> bool { return parameter1 = > variable && parameter2 <= variable; };
    }

    int jour{0};
    std::cout << "Which day are you born ? ";
    entree_securisee(jour, predicat(jour, 1, 31));

    int mois{0};
    std::cout << "Month ? ";
    entree_securisee(jour, predicat(jour, 1, 12));

    int annee{0};
    std::cout << "Year ? ";
    entree_securisee(jour, predicat(jour, 1910, 2020));

    double taille{0.0};
    std::cout << "Height ? (cm)";
    entree_securisee(jour, predicat(jour, 0, 250));

    std::cout << "You are born " << jour << "/" << mois << "/" << annee << " and you tall " << taille << "cm." << std::endl;
    return 0;
}