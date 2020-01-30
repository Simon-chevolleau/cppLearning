#include <iostream>
#include <string>

void entree_securisee(int & variable)
{
    while (!(std::cin >> variable))
    {
        std::cout << "Entrée invalide. Recommence." << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}

void entree_securisee(double & variable)
{
    while (!(std::cin >> variable))
    {
        std::cout << "Entrée invalide. Recommence." << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}

int main()
{
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