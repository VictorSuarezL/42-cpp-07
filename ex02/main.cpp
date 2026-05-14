#include "Array.hpp"

int	main(void)
{
	Array<int>			empty;
	Array<int>			numbers(5);
	Array<std::string>	words(3);

	std::cout << "Empty size: " << empty.size() << std::endl;
	std::cout << "Numbers size: " << numbers.size() << std::endl;

	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i + 1;
	for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << std::endl;

	Array<int>	copy(numbers);
	copy[0] = 42;
	std::cout << "Original first value: " << numbers[0] << std::endl;
	std::cout << "Copy first value: " << copy[0] << std::endl;

	words[0] = "hello";
	words[1] = "template";
	words[2] = "array";
	for (unsigned int i = 0; i < words.size(); i++)
		std::cout << words[i] << std::endl;

	try
	{
		std::cout << numbers[10] << std::endl;
	}
	catch (std::exception const &)
	{
		std::cout << "Exception: index out of bounds" << std::endl;
	}
	return (0);
}
