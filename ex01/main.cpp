#include "iter.hpp"

int	main(void)
{
	int			numbers[] = {1, 2, 3, 4, 5};
	std::string	words[] = {"one", "two", "three"};

	std::cout << "Numbers:" << std::endl;
	iter(numbers, 5, printElement<int>);
	iter(numbers, 5, addOne<int>);
	std::cout << "Numbers after addOne:" << std::endl;
	iter(numbers, 5, printElement<int>);

	std::cout << "Words:" << std::endl;
	iter(words, 3, printElement<std::string>);

	std::cout << "Const array:" << std::endl;
	int const	constNumbers[] = {10, 20, 30};
	iter(constNumbers, 3, printElement<int>);
	return (0);
}
