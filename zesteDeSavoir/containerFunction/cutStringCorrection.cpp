#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string texte { "Voici une phrase que je vais couper." };
    char const delimiteur { ' ' };
    std::vector<std::string> parties {};

    auto debut = std::begin(texte);
    auto fin = std::end(texte);
    auto iterateur = std::find(debut, fin, delimiteur);

    while (iterateur != fin)
    {
        // Grâce à std::distance, nous obtenons la taille du mot.
        std::string mot { debut, debut + std::distance(debut, iterateur) };

        parties.push_back(mot);
        // +1 pour sauter le délimiteur.
        debut = iterateur + 1;
        // Et on recommence.
        iterateur = std::find(debut, fin, delimiteur);
    }

    // Ne pas oublier le dernier mot.
    std::string mot { debut, debut + std::distance(debut, iterateur) };
    parties.push_back(mot);

    // On affiche pour vérifier.
    for (std::string mot : parties)
    {
        std::cout << mot << std::endl;
    }

    return 0;
}
