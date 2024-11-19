/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:48:39 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/19 13:04:50 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &other){(void) other;}

PmergeMe::~PmergeMe(){}

PmergeMe& PmergeMe::operator=(const PmergeMe &other){ (void)other; return (*this);}

void	PmergeMe::parseArgs(char **argv)
{
	int	i;
	int	num;

	i = 1;
	while (argv[i])
	{
		num = std::stoi(argv[i]);
		numbers.push_back(num);
		i++;
	}
}

void	PmergeMe::sortPairs()
{
	unsigned long	i;
	int	isEven;
	int	tmp;

	isEven = numbers.size() % 2;
	i = 0;
	while (i < numbers.size() - 1 - isEven)
	{
		if (i % 2 == 0)
		{
			if (numbers[i] > numbers[i + 1])
			{
				tmp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = tmp;
			}
		}
		i++;
	}
}

void	PmergeMe::erasePairNumbers()
{
	unsigned int	i;
	int				isEven;

	isEven = numbers.size() % 2;
	i = 0;
	while (i < numbers.size() - 1 - isEven)
	{
		std::cout << "erasing number : " << numbers[i] << "position : " << i << std::endl;
		numbers.erase(numbers.begin() + i);
		std::cout << "next position : " << i << "  " << numbers[i] << std::endl;
		i++;
	}
}

void	PmergeMe::extractSmallHalf()
{
	unsigned int	i;
	int				isEven;

	isEven = numbers.size() % 2;
	i = 0;
	while (i < numbers.size() - 1 - isEven)
	{
		if (i % 2 == 0)
		{
			small_numbers.push_back(numbers[i]);
		}
		i++;
	}
	erasePairNumbers();
}


void	PmergeMe::printNumbers() const
{
	std::cout << "Numbers:       ";
	for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printSmall_numbers() const
{
	std::cout << "Small Numbers: ";
	for (std::vector<int>::const_iterator it = small_numbers.begin(); it != small_numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}