#include <iostream>
#include <vector>

int main()
{
    std::vector<char> const lettres { 'a', 'b', 'b', 'c', 'b', 'd', 'd', 'a' };
    char const lettre_a_compter { 'b' };
    int total { 0 };

    for (auto const lettre : lettres)
    {
        if (lettre == lettre_a_compter)
        {
            ++total;
        }
    }

    std::cout << "La lettre '" << lettre_a_compter << "' est présente " << total << " fois." << std::endl;

    return 0;
}
