#include <iostream>

int main()
{
    std::cout << "Donne-moi un entier : ";
    int n { 0 };
    std::cin >> n;

    int total { 0 };
    int compteur { 1 };

    while (compteur <= n)
    {
        total += compteur;
        ++compteur;
    }
    
    std::cout << "La somme totale vaut " << total << "." << std::endl;
    return 0;
}
