#include <iostream>

bool parentheses(std::string expression)
{
    int ouvrantes{0};
    int fermantes{0};

    for (auto caractere : expression)
    {
        if (caractere == '(')
        {
            ++ouvrantes;
        }
        else
        {
            ++fermantes;
        }

        if (fermantes > ouvrantes)
        {
            // Pas la peine de continuer, l'expression est invalide.
            return false;
        }
    }

    return ouvrantes == fermantes;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << parentheses("((()))") << std::endl;
    std::cout << parentheses("((())") << std::endl;
    std::cout << parentheses("))((") << std::endl;

    return 0;
}
