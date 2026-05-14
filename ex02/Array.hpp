#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <exception>
# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &other);
		~Array(void);

		Array	&operator=(Array const &other);
		T		&operator[](unsigned int index);
		T const	&operator[](unsigned int index) const;

		unsigned int	size(void) const;
};

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _size(n)
{
	if (n > 0)
		_array = new T[n]();
}

template <typename T>
Array<T>::Array(Array const &other) : _array(NULL), _size(0)
{
	*this = other;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &other)
{
	unsigned int	i;
	T				*copy;

	if (this == &other)
		return (*this);
	copy = NULL;
	if (other._size > 0)
	{
		copy = new T[other._size]();
		i = 0;
		while (i < other._size)
		{
			copy[i] = other._array[i];
			i++;
		}
	}
	delete [] _array;
	_array = copy;
	_size = other._size;
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return (_array[index]);
}

template <typename T>
T const	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::exception();
	return (_array[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

#endif
