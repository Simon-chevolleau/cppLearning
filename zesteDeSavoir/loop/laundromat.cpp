#include <iostream>

int main()
{
    std::cout << "Pleaser, enter the weight of your laundry" << std::endl;
    unsigned int laundryWeight;
    if (std::cin >> laundryWeight)
    {
        if (laundryWeight < 5)
        {
            std::cout << "Please put your laundry in the 5kg laundry machine" << std::endl;
        }
        else if (laundryWeight >= 5 && laundryWeight < 10)
        {
            std::cout << "Please put your laundry in the 10kg laundry machine" << std::endl;
        }
        else
        {
            unsigned int laundryCount;
            while (laundryWeight >= 10)
            {
                laundryWeight -= 10;
                laundryCount++;
            }
            std::cout << "Please put fill " << laundryCount << " 10kg laundry machine" << std::endl;
            std::cout << "And then put the rest (" << laundryWeight << "kg) in the 5kg laundry machine" << std::endl;
        }
    }
    else
    {
        std::cout << "You must enter positive number next time" << std::endl;
    }
}