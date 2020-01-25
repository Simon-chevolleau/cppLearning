#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::string test { "\n\tHello !\n\t" };
    std::cout << "Avant modification : " << test << std::endl;

    // On utilise l'itérateur fourni par std::find_if_not, qui pointe sur le premier élément qui n'est pas un espace.
    auto premier_non_espace { std::find_if_not(std::begin(test), std::end(test), isspace) };
    test.erase(std::begin(test), premier_non_espace);
    // On affiche pour tester.
    std::cout << "Suppression au début : " << test << std::endl;

    // En inversant, tous les espaces de fin se retrouvent au début.
    std::reverse(std::begin(test), std::end(test));
    // On reprend le même algorithme.
    premier_non_espace = std::find_if_not(std::begin(test), std::end(test), isspace);
    test.erase(std::begin(test), premier_non_espace);
    // On revient à l'état initial.
    std::reverse(std::begin(test), std::end(test));
    // On affiche pour tester.
    std::cout << "Suppression à la fin : " << test << std::endl;

    return 0;
}