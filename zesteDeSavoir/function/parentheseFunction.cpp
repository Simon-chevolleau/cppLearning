
#include <iostream>
#include <string>

bool parenthese(std::string phrase)
{
    unsigned int countOpening{0}, countClosing{0};
    if (phrase.size() % 2 > 0)
    {
        return false;
    }
    for (int i = 0; i < (phrase.size() / 2); i++)
    {
        if (phrase[i] == '(')
        {
            countOpening++;
        }
        else
        {
            return false;
        }
    }
    for (int i = (phrase.size() - 1); i >= ((phrase.size() / 2)); i--)
    {
        if (phrase[i] == ')')
        {
            countClosing++;
        }
        else
        {
            return false;
        }
    }
    if (countOpening == countClosing)
    {
        return true;
    }
}
int main()
{
    std::cout << "Please your parenthesis" << std::endl;
    std::string userPhrase;
    std::cin >> userPhrase;
    std::cout << std::boolalpha << parenthese(userPhrase) << std::endl;
}