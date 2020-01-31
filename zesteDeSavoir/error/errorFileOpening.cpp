#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

std::vector<std::string> lire_fichier(std::string const &fileName)
{
    std::vector<std::string> lignes{};
    std::string ligne{""};

    std::ifstream fichier{fileName};
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

std::string openingFile()
{
    std::string fileName{""};
    std::cout << "Please enter a file name" std::endl;
    std::cin >> fileName;
    return fileName;
}

int main()
{
    std::string fileName{""};
    std::cout << "Please give a file name" << std::endl;
    std::cin >> fileName;
    bool file{true};

    while (!file)
    {
        try
        {
            auto lignes = lire_fichier(fileName);
            std::cout << "Voici le contenu du fichier :" << std::endl;
            for (auto const &ligne : lignes)
            {
                std::cout << ligne << std::endl;
            }
        }
        catch (std::runtime_error const &exception)
        {
            std::cout << exception.what() << std::endl;
            openingFile();
        }
    }
    {
        /* code */
    }

    return 0;
}