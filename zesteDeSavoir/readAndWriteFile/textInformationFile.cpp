#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::cout << R"(Please enter the file you want to open)" << std::endl;
    std::string nameFile;
    std::cin >> nameFile;
    std::ifstream file{nameFile};
    char space{' '};
    std::string line{""};

    unsigned int countPhrase, countWord, countChar;

    while (std::getline(file, line))
    {
        countPhrase++;
        for (char character : line)
        {
            countChar++;
        }
        std::istringstream iss(line);
        std::string word;
        while (iss >> word)
        {
            countWord++;
        }
    }
    std::cout << "There is " << countPhrase << " phrases in your file" << std::endl;
    std::cout << "There is " << countWord << " words in your file" << std::endl;
    std::cout << "There is " << countChar << " characters in your file" << std::endl;
}