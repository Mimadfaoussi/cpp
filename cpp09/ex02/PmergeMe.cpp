/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:48:39 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/19 11:48:20 by mfaoussi         ###   ########.fr       */
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

void	PmergeMe::printNumbers() const
{
	for (std::vector <int>::const_iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << "nb : " << *it << std::endl;
	}
}