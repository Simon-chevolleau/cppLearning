#include <iostream>

void rectangle(int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::cout << "Which width and height for rectangle?" << std::endl;
    int width, height;
    std::cin >> width >> height;
    rectangle(width, height);
}