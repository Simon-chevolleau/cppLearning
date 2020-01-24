#include <iostream>
#include <string>

int main()
{
    std::cout << "Entre ton age : ";
    unsigned int age { 0 };
    
    if (std::cin >> age)
    {
        // Tout va bien.
        std::cout << "Tu as " << age << " ans.\n";
    }
    else
    {
        // Si std::cin a rencontré une erreur quelconque.
        std::cout << "Tu n'as pas rentré un entier, il y a eu une erreur." << std::endl;
        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.
    }

    std::cout << "Maintenant, vérifions que tout va bien." << std::endl;
    std::cout << "Entre ton nom : ";
    std::string nom { "" };
    std::cin >> nom;
    std::cout << "Tu t'appelles " << nom << ".\n";

    return 0;
}