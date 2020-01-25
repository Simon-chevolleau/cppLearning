#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string const phrase { "Exemple illustrant le tutoriel C++ de Zeste de Savoir, mais un peu plus long." };

    // Pour garder en mémoire le début de chaque mot.
    auto iterateur_precedent { std::begin(phrase) };
    auto iterateur_espace { std::find(std::begin(phrase), std::end(phrase), ' ') };

    // Tant qu'on est pas à la fin de la phrase.
    while (iterateur_espace != std::end(phrase))
    {
        std::string const mot { iterateur_precedent, iterateur_espace };
        auto const total_e { std::count(std::begin(mot), std::end(mot), 'e') };

        std::cout << "Dans le mot '" << mot << "', il y a " << total_e << " fois la lettre 'e'." << std::endl;

        // On incrémente pour ne pas garder l'espace au début, car iterateur_espace pointe déjà sur un espace.
        ++iterateur_espace;
        // On met à jour notre itérateur de sauvegarde.
        iterateur_precedent = iterateur_espace;
        // On cherche la première occurrence dans le nouveau sous-ensemble.
        iterateur_espace = std::find(iterateur_espace, std::end(phrase), ' ');
    }

    // Une dernière fois pour analyser les caractères restants.
    std::string const dernier_mot { iterateur_precedent, std::end(phrase) };
    std::cout << "Dans le dernier mot '" << dernier_mot << "', il y a " << std::count(iterateur_precedent, std::end(phrase), 'e') << " fois la lettre 'e'." << std::endl;

    return 0;
}