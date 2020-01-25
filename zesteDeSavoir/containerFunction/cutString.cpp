#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::cout << "Please enter a phrase" << std::endl;
	std::string phrase;
	std::cin >> phrase;
	std::cout << "Please enter a delimiter" << std::endl;
	char delim;
	std::cin >> delim;
	auto begin {std::begin(phrase)};
	auto end {std::end(phrase)};
	auto it {std::find(begin, end, delim)};
	std::vector<std::string> newPhrase;
	while ( it != end)
	{
		std::string word { begin, begin + std::distance(begin, it) };
		newPhrase.push_back(word);
		begin = it + 1;
		auto it {std::find(begin, end, delim)};
	}
	std::string word { begin, begin + std::distance(begin, it) };
	newPhrase.push_back(word);
	std::cout << "Here is how your first phrase has been cut" << std::endl;

	for (auto mot : newPhrase)
	{
		std::cout << mot << std::endl;
	}

}