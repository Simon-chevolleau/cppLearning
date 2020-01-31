#include <cassert>
#include <iostream>
#include <vector>
#include <limits>

void secureCin(int &variable)
{
    while (!(std::cin >> variable))
    {
        std::cout << "Incorecct value" << std::endl;
        std::cin.clear();
        std::cin.ingore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void secureCin(double &variable)
{
    while (!(std::cin >> variable))
    {
        std::cout << "Incorecct value" << std::endl;
        std::cin.clear();
        std::cin.ingore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
int main()
{

    std::cout << "Valeur minimale d'un int : " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Valeur maximale d'un int : " << std::numeric_limits<int>::max() << std::endl;

    std::cout << "Valeur minimale d'un double : " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Valeur maximale d'un double : " << std::numeric_limits<double>::max() << std::endl;

    std::cout << "Please enter a integer value, then a double value" std::endl;
    int value1{0};
    double value2{0};
    secureCin(value1);
    secureCin(value2);

    return 0;
}