#include <iostream>

int main()
{
    std::cout << "Please enter a positive number" << std::endl;
    unsigned int number;
    if (std::cin >> number)
    {
        unsigned int count{1}, sum{0};

        while (count <= number)
        {
            sum += count;
            count++;
        }
        std::cout << "The sum from 1 to " << number << " is  equal to " << sum << std::endl;
    }
}