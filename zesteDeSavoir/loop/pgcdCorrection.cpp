#include <iostream>

int main()
{
    std::cout << "Rentre un nombre a : ";
    int a { 0 };
    std::cin >> a;

    std::cout << "Rentre un nombre b : ";
    int b { 0 };
    std::cin >> b;

    int r { a % b };
    while (r != 0)
    {
        a = b;
        b = r;
        // r vaut le reste de la division entière de a par b.
        r = a % b;
    }

    std::cout << "PGCD vaut = " << b << std::endl;
    return 0;
}
