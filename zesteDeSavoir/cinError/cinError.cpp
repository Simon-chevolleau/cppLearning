#include <iostream> //  # means we're summoning a pre-processor directive, and include means it's gonna import files
// #define NOMINMAX     // for accents in windows
// #include <Windows.h> // for accents in windows

int main()
{
    // SetConsoleOutputCP(1252); // for accents in windows
    std::cout << "Hey, how old are you?" << std::endl;
    unsigned int age;
    if (std::cin >> age)
    {
        std::cout << "Nice one!" << std::endl;
    }
    else
    {
        std::cout << "OH! I was expecting an integer... I have to clear it all now..." << std::endl;
        std::cin.clear();           // Put cin in a normal mode
        std::cin.ignore(255, '\n'); // This is going to ignore 255 characters or until there a new ligne
    }

    std::cout << "Enter your name please" << std::endl;
    std::string firstName;
    if (std::cin >> firstName)
    {
        std::cout << "Your first name is " << firstName.length() << " letters long" << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(255, '\n'); // This is going to ignore 255 characters or until there a new ligne
        std::cout << "You would normaly never see this message because a string can easily handle integer or whatever :)" << std::endl;
    }

    return 0; // if nothing is return, main will assume you want to return 0 instead!
}
