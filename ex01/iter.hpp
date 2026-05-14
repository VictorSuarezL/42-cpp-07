#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>
# include <string>

template <typename T>
void	iter(T *array, std::size_t length, void (*function)(T &))
{
	std::size_t	i;

	if (!array || !function)
		return ;
	i = 0;
	while (i < length)
	{
		function(array[i]);
		i++;
	}
}

template <typename T>
void	iter(T const *array, std::size_t length, void (*function)(T const &))
{
	std::size_t	i;

	if (!array || !function)
		return ;
	i = 0;
	while (i < length)
	{
		function(array[i]);
		i++;
	}
}

template <typename T>
void	printElement(T const &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	addOne(T &element)
{
	element += 1;
}

#endif
