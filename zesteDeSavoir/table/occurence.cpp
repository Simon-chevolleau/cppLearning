#include <iostream>
#include <vector>

int main ()
{
    std::vector<char> charTable;
    char letter;
    int count {0};
    std::cout << "Please enter 10 letters and I will count the a occurence" << std::endl;\
    while (charTable.size() < 10)
    {
    while (!(std::cin >> letter))
    {
        std::cout << "Please only enter letter" << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
        charTable.push_back(letter);
    }

    for (auto const element : charTable)
    {
        if (element == 'a')
        {
            count ++;
        }
    }
    std::cout << "Letter b appears " << count << " times" << std::endl;
}