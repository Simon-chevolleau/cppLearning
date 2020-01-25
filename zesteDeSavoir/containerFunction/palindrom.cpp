#include <iostream>
#include <string>
#include <algorithm>


int main()
{
	std::string word;
	std::cout << "Please enter your word and I will tell you if it's a palindrome word" << std::endl;
	std::cin >> word;
	if (std::equal(std::begin(word), std::end(word), std::rbegin(word), std::rend(word)))
	{
		std::cout << "Yes it is!" << std::endl;
	}else{
		std::cout << "No it's not..." << std::endl;
	}
}