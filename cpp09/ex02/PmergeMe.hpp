/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:47:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/19 21:16:16 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PMERGEME_HPP
# define PMERGEME_HPP


#include <iostream>
#include <vector>
# include <deque>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <climits>
#include <algorithm>

template <typename container = std::vector <int>>
class	PmergeMe {

	public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe& operator=(const PmergeMe &other);
	~PmergeMe();
	
	void		printNumbers() const;
	void		printSmall_numbers() const;
	void		parseArgs(char **argv);
	void		sortPairs();
	void		extractSmallHalf();
	void		erasePairNumbers();
	void		binrayInsert();
	void		insert(int value);
	int			getsize() const;

	private:
	container numbers;
	container small_numbers;
};



template <typename Container>
PmergeMe<Container>::PmergeMe() {}

template <typename Container>
PmergeMe<Container>::PmergeMe(const PmergeMe &other) {
    (void)other;
}

template <typename Container>
PmergeMe<Container>::~PmergeMe() {}

template <typename Container>
PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe &other) {
    (void)other;
    return (*this);
}


template <typename container>
void	PmergeMe<container>::parseArgs(char **argv)
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

template <typename container>
void	PmergeMe<container>::sortPairs()
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

template <typename container>
void	PmergeMe<container>::erasePairNumbers()
{
	unsigned int	i;
	int				isEven;

	isEven = numbers.size() % 2;
	i = 0;
	while (i < numbers.size() - 1 - isEven)
	{
		numbers.erase(numbers.begin() + i);
		i++;
	}
}

template <typename container>
void	PmergeMe<container>::extractSmallHalf()
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
	std::sort (small_numbers.begin(), small_numbers.end());
	erasePairNumbers();
}

template <typename container>
void	PmergeMe<container>::insert(int value)
{
	int	start;
	int	end;
	int	middle;

	start = 0;
	end = small_numbers.size();

	
	while (start < end)
	{
		middle = start + (end - start) / 2;
		if (value > small_numbers[middle])
			start = middle + 1;
		else
			end = middle;
	}
	small_numbers.insert(small_numbers.begin() + start, value);
}

template <typename container>
void	PmergeMe<container>::binrayInsert()
{
	unsigned int	i;

	i = 0;
	while (i < numbers.size())
	{
		if (numbers[i] < small_numbers[0])
			small_numbers.insert(small_numbers.begin(), numbers[i]);
		else if (numbers[i] > small_numbers[small_numbers.size() - 1])
			small_numbers.push_back(numbers[i]);
		else
		{
			insert(numbers[i]);
		}
		i++;
	}
}

template <typename container>
void	PmergeMe<container>::printNumbers() const
{
	std::cout << "Before: ";
	for (typename container::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename container>
void	PmergeMe<container>::printSmall_numbers() const
{
	std::cout << "After:  ";
	for (typename container::const_iterator it = small_numbers.begin(); it != small_numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename container>
int	PmergeMe<container>::getsize() const
{
	return (small_numbers.size());
}

# endif