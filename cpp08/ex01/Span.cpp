/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:13:19 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/15 09:18:52 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

// Span::Span(){}

Span::Span(unsigned int N): N(N){}

Span::Span(const Span &other): N(other.N), _numbers(other._numbers) {}

Span::~Span(){}

unsigned int Span::getSize() const 
{
	return N;
}

// Span& Span::operator=(cont Span &other)
// {
// 	if (this != &other)
// 	{
// 		N = other.getSize();
// 		_numbers = other._numbers;
// 	}
// 	return (*this);
// }


void	Span::addNumber(unsigned int nb)
{
	if (_numbers.size() >= N)
	{
		throw OutOfRangeException();
	}
	_numbers.push_back(nb);
}

void	Span::printNumbers(std::vector<int> nbs) const
{
	for (unsigned int i = 0; i < nbs.size(); i++)
	{
		std::cout << nbs[i] << " ";
	}
	std::cout << std::endl;
}

unsigned int	Span::shortestSpan() const
{
	std::vector<int>	copy_numbers;

	if (_numbers.size() < 2)
		throw NoDistanceException();
	copy_numbers = _numbers;
	std::cout << "copy numbers before sort : " << std::endl;
	printNumbers(copy_numbers);
	std::sort(copy_numbers.begin(), copy_numbers.end());
	
	std::cout << "copy numbers after sort : " << std::endl;
	printNumbers(copy_numbers);
	
	return (0);
}

const char *Span::OutOfRangeException::what() const throw() {
  return "Span is full!\n";
}

const char *Span::NoDistanceException::what() const throw() {
  return "Not enough Points!\n";
}


