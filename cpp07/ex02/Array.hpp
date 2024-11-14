/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:23:51 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/14 08:14:51 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>


class IndexOutOfRangeException : public std::exception
{
	public:
	char const *what() const throw() 
	{
		return "out of range!\n";
	}
};

template <typename T>
class Array {
	public:
	Array() : elements(NULL), arraySize(0){}
	Array(unsigned int n) : arraySize(n)
	{
		if (n == 0)
			elements = NULL;
		else
			elements = new T[n]();
	}

	Array(const Array &other)
	{
		arraySize = other.arraySize;
		if (arraySize == 0)
			elements = NULL;
		else
		{
			elements = new T[arraySize]();
			for (unsigned int i = 0; i < arraySize; i++)
			{
				elements[i] = other.elements[i];
			}
		}
	}
	Array& operator=(const Array &other)
	{
		if (this != &other)
		{
			delete [] elements;
			arraySize = other.arraySize;
			if (arraySize > 0)
			{
				elements = new T[arraySize]();
				for (unsigned int i = 0; i < arraySize; i++)
				{
					elements[i] = other.elements[i];
				}
			}
			else
				elements = NULL;
		}
		return (*this);
	}

	~Array()
	{
		std::cout << "elements destroyed" << std::endl;
		delete [] elements;
	}


	T &operator[](unsigned int index)
	{
		if (index >= arraySize)
			throw IndexOutOfRangeException();
		return elements[index];
	}

	T const &operator[](unsigned int index) const 
	{
		if (index >= arraySize)
			throw IndexOutOfRangeException();
		return elements[index];
	}

	unsigned int size() const 
	{
		return (arraySize);
	}
	
	private:
	T*				elements;
	unsigned int	arraySize;
};

# endif