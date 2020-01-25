#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::cout << "Please give me a phrase and I will count every \'e\' in each word" << std::endl;
    std::string phrase;
    std::cin >> phrase;
    for (auto word : phrase) //This seems to not work, investigations on how word is declare here are needed
    {
        auto totalE { std::count(std::begin(word), std::end(word), 'e')};
        std::cout << "In the word " << word << ", there is : " << totalE << "e inside" << std::endl;
    }
}