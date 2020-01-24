#include <iostream>
#include <vector>

int main()
{
    std::cout << "Please enter positive numbers so I can calculate the mean, but if you're entering a negative number I won't gather your numbers" << std::endl;
    std::vector<double> table {};
    int number;
    while (true)
    {

        while (!(std::cin >> number))
        {
            std::cout << " Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(255, '\n');
        }
        if (number < 0)
        {
            break;
        }
        table.push_back(number);
    }
    double sum;
    for (auto const num : table)
    {
        sum += num;
    }
    std::cout << "Mean = " << sum / table.size() << std::endl;
}