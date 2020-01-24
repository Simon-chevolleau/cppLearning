#include <iostream>
#include <vector>

int main()
{
    
    int number;
    std::vector<int> odd;
    std::vector<int> even; 
    while (!(std::cin >> number))
    {
        std::cout << "I wanted a number!" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    while (number > 0)
    {   
        
        if (number % 2 == 0)
        {
            even.push_back(number);
        }
        if (number % 2 != 0)
        {
            odd.push_back(number);
        }
        std::cin >> number;
        if (number < 0)
    {
        break;
    }
    }
    for (auto const element : odd)
    {
        std::cout << element << " ";
    }
    for (auto const element : even)
    {
        std::cout << element << " ";
    }

    
}