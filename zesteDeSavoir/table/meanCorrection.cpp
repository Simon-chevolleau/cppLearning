#include <iostream>
#include <vector>

int main()
{
    std::vector<double> notes {};
    
    while (true)
    {
        std::cout << "Entre une note (inférieur à 0 pour arrêter) : ";
        double note { 0.0 };
        
        // N'oublions pas de protéger notre entrée.
        while (!(std::cin >> note))
        {
            std::cout << "Entrée invalide. Recommence." << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
        }

        if (note < 0)
        {
            // On s'arrête si la note est inférieur à 0.
            break;
        }

        // On ajoute la note à la liste des notes.
        notes.push_back(note);
    }

    if (!std::empty(notes))
    {
        double total{};
        for (auto const note : notes)
        {
            total += note;
        }

        std::cout << "Ta moyenne est de " << total / notes.size() << "." << std::endl;
    }
    else
    {
        std::cout << "Tu n'as pas rentré de notes, je ne peux pas calculer ta moyenne." << std::endl;
    }
    
    return 0;
}
