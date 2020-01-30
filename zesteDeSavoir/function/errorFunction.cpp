#include <iostream>

void secureCin(int &intNumber)
{
    while (!(std::cin >> intNumber))
    {
        std::cout << "Please enter a correct number" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}
void secureCin(double &number)
{
    while (!(std::cin >> number))
    {
        std::cout << "Please enter a correct number" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
}

int main()
{
    int jour{0};
    std::cout << "Quel jour es-tu né ? ";
    secureCin(jour);

    int mois{0};
    std::cout << "Quel mois ? ";
    secureCin(mois);

    int annee{0};
    std::cout << "Quelle année ? ";
    secureCin(annee);

    double taille{0.0};
    std::cout << "Quelle taille ? ";
    secureCin(taille);

    std::cout << "Tu es né le " << jour << "/" << mois << "/" << annee << " et tu mesures " << taille << "m." << std::endl;
    return 0;
}
