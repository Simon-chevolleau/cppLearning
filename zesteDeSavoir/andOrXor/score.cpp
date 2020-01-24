#include <iostream>

int main()
{

    std::cout << "Please enter your video game score" << std::endl;
    unsigned int score;
    if (std::cin >> score)
    {
        if (score < 2000)
        {
            std::cout << "That's really bad" << std::endl;
        }
        else if (score >= 2000 && score < 5000)
        {
            std::cout << " You can do better" << std::endl;
        }
        else if (score >= 5000 && score < 9000)
        {
            std::cout << "Oh! You are on a good way, continue" << std::endl;
        }
        else
        {
            std::cout << "You're actually the best I've ever seen in my entire life!!!" << std::endl;
        }
    }
    else
    {
        std::cout << "Oh! That's not even a positive number!" << std::endl; //There is no real need to clear cin here, because I won't use it again
        return 1;
    }
    return 0;
}