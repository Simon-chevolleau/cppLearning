#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

std::vector<std::string> lire_fichier(std::string const & nom_fichier)
{
    std::vector<std::string> lignes {};
    std::string ligne { "" };

    std::ifstream fichier { nom_fichier };
    // Pour tester si un fichier est ouvert et valide, un simple if suffit.
    if (!fichier)
    {
        throw std::runtime_error("Fichier impossible à ouvrir.");
    }

    while (std::getline(fichier, ligne))
    {
        lignes.push_back(ligne);
    }

    return lignes;
}

std::string demander_nom_fichier()
{
    std::string nom_fichier { "" };
    std::cout << "Donnez un nom de fichier : ";
    std::cin >> nom_fichier;
    return nom_fichier;
}

int main()
{
    std::string nom_fichier { demander_nom_fichier() };
    bool fichier_valide { true };

    do
    {
        try
        {
            auto lignes = lire_fichier(nom_fichier);
            std::cout << "Voici le contenu du fichier :" << std::endl;
            for (auto const & ligne : lignes)
            {
                std::cout << ligne << std::endl;
            }

            // Si on atteint cette ligne, c'est qu'aucune exception n'a été levée et donc que le fichier est OK.
            fichier_valide = true;
        }
        catch (std::runtime_error const & exception)
        {
            std::cout << "Erreur : " << exception.what() << std::endl;
            // Si on atteint cette ligne, c'est qu'une exception a été levée car le nom n'est pas bon.
            fichier_valide = false;
            // Donc on redemande le nom.
            nom_fichier = demander_nom_fichier();
        }

    } while (!fichier_valide);

    return 0;
}
