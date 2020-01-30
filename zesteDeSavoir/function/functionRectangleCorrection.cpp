#include <iostream>

void rectangle(int longueur, int largeur)
{
    for (auto i{0}; i < longueur; ++i)
    {
        for (auto j{0}; j < largeur; ++j)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

int main()
{
    rectangle(2, 5);
    rectangle(4, 3);
    return 0;
}
