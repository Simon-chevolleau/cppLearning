#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream fichier { "fichier_1.txt" };
    std::string ligne { "" };

    int total_lignes { 0 };
    int total_caracteres { 0 };
    int total_mots { 0 };

    bool espace_caractere_precedent { false };
    while (std::getline(fichier, ligne))
    {
        ++total_lignes;
        
        for (char c : ligne)
        {
            if (isspace(c))
            {
                // Si le précédent n'était pas un espace, alors c'était une partie de mot.
                if (!espace_caractere_precedent)
                {
                    ++total_mots;
                }

                espace_caractere_precedent = true;
            }
            else
            {
                ++total_caracteres;
                espace_caractere_precedent = false;
            }
        }

        // Ne pas oublier de regarder pour l'éventuel dernier mot.
        if (!espace_caractere_precedent)
        {
            ++total_mots;
            espace_caractere_precedent = true;
        }
    }

    std::cout << "Total de caractères : " << total_caracteres << std::endl;
    std::cout << "Total de lignes : " << total_lignes << std::endl;
    std::cout << "Total de mots : " << total_mots << std::endl;

    return 0;
}