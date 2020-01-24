#include <iostream>
#include <vector>

int main()
{
    std::vector<int> table { 5 , 4 , 3, 4 , 1};
    int min = table[0], max = table[0];
    for (auto const number : table)
    {
        std::cout << number << " ";
        if (min < number)
        {
            min = number;
        }
        if (max > number)
        {
            max = number;
        }
        
    }
    std::cout << "Max : " << max << " and min : " << min << std::endl;
}
