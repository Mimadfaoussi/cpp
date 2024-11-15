/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:13:19 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/15 18:52:58 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N): N(N){}

Span::Span(const Span &other): N(other.N), _numbers(other._numbers) {}

Span::~Span(){}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		N = other.N;
		_numbers = other._numbers;
	}
	return (*this);
}


void	Span::addNumber(unsigned int nb)
{
	if (_numbers.size() >= N)
	{
		throw OutOfRangeException();
	}
	_numbers.push_back(nb);
}

void	Span::addNumbers(std::vector<int>::iterator const &start, std::vector<int>::iterator const &end)
{
	if (std::distance(start, end) > static_cast<int>(N - _numbers.size()))
		throw OutOfRangeException();
	_numbers.insert(_numbers.end(), start, end);
}



void	Span::printNumbers(std::vector<int> nbs) const
{
	std::cout << "ordered numbers : " << std::endl;
	for (unsigned int i = 0; i < nbs.size(); i++)
	{
		std::cout << nbs[i] << " ";
	}
	std::cout << std::endl;
}

int	Span::shortestSpan() const
{
	std::vector<int>	copy_numbers;
	int		shortest;

	if (_numbers.size() < 2)
		throw NoDistanceException();
	copy_numbers = _numbers;
	std::sort(copy_numbers.begin(), copy_numbers.end());
	shortest = copy_numbers[1] - copy_numbers[0];
	for (unsigned int i = 0; i < copy_numbers.size(); i++)
	{
		if (i != copy_numbers.size() - 1)
		{
			if (copy_numbers[i + 1] - copy_numbers[i] < shortest)
				shortest = copy_numbers[i + 1] - copy_numbers[i];
		}
	}
	return (shortest);
}

int	Span::longestSpan() const
{
	std::vector<int>	copy_numbers;
	int		longest;

	if (_numbers.size() < 2)
		throw NoDistanceException();
	copy_numbers = _numbers;
	std::sort(copy_numbers.begin(), copy_numbers.end());	
	longest = copy_numbers[copy_numbers.size() - 1] - copy_numbers[0];
	// std::cout << "Longestspan is : " << longest << std::endl;
	return (longest);
}

const char *Span::OutOfRangeException::what() const throw() {
  return "Span is Out Of Range !";
}

const char *Span::NoDistanceException::what() const throw() {
  return "Not enough Points!";
}


