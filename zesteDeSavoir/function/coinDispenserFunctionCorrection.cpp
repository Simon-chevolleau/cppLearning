#include <iostream>
#include <vector>

std::vector<int> distributeur(int total, std::vector<int> coupures_disponibles)
{
    std::vector<int> resultat {};

    for (auto coupure : coupures_disponibles)
    {
        resultat.push_back(total / coupure);
        total %= coupure;
    }

    return resultat;
}

void affichage_distributeur(std::vector<int> total, std::vector<int> coupures_disponibles)
{
    int i { 0 };
    for (auto coupure : total)
    {
        // Si 0, ça veut dire qu'il n'y a aucune coupure de ce type dans le total, donc nous n'afficherons rien.
        if (coupure != 0)
        {
            std::cout << coupure << " x " << coupures_disponibles[i] << " euros" << std::endl;
        }
        ++i;
    }
}

int main()
{
    std::vector<int> const coupures_disponibles { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    auto const coupures_285 { distributeur(285, coupures_disponibles) };
    affichage_distributeur(coupures_285, coupures_disponibles);

    // Moins de coupures disponibles.
    std::vector<int> const autre_coupures_disponibles { 200, 50, 10, 1 };    
    auto const coupures_45874 { distributeur(45874, autre_coupures_disponibles) };
    affichage_distributeur(coupures_45874, autre_coupures_disponibles);

    return 0;
}
