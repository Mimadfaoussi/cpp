/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:48:21 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/19 21:19:52 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

bool	isInteger(const std::string &str)
{
	int		start;
	double	check_limit;

	if (str.empty())
		throw std::invalid_argument("empty arg.");
	if (str[0] == '+' || str[1] == '-')
		start = 1;
	else
		start = 0;
	while (str[start])
	{
		if (! std::isdigit(str[start]))
			throw std::invalid_argument("Invalid integer: " + str);
		start++;
	}
	check_limit = std::stol(str);
	if (check_limit < INT_MIN || check_limit > INT_MAX)
		throw std::out_of_range("Integer out of range " + str);
	return (true);
}

bool	check_args(char  **argv)
{
	int	i;

	try {
		i = 1;
		while (argv[i])
		{
			isInteger(argv[i]);
			i++;
		}
	} catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
	return (true);
}



int main(int argc, char **argv)
{
	PmergeMe<>	obj;

	if (argc < 2)
	{
		std::cout << "Error: Usage: ./PmergeMe sequence of int's" << std::endl;
		return (1);
	}

	check_args(argv);

	PmergeMe<std::vector<int>> vectorPmergeMe;
	PmergeMe<std::deque<int>> dequePmergeMe;

	vectorPmergeMe.parseArgs(argv);
	dequePmergeMe.parseArgs(argv);

	vectorPmergeMe.printNumbers();

	clock_t start = clock();
	vectorPmergeMe.sortPairs();
	vectorPmergeMe.extractSmallHalf();
	vectorPmergeMe.binrayInsert();
	clock_t end = clock();


	vectorPmergeMe.printSmall_numbers();
	std::cout << "Time to process a range of " << vectorPmergeMe.getsize() << " elements with std::vector : "
			  << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6 << " µs" << std::endl;
	
	dequePmergeMe.printNumbers();

	start = clock();
	dequePmergeMe.sortPairs();
	dequePmergeMe.extractSmallHalf();
	dequePmergeMe.binrayInsert();
	end = clock();

	dequePmergeMe.printSmall_numbers();
	std::cout << "Time to process a range of " << vectorPmergeMe.getsize() << " elements with std::deque : "
			  << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6 << " µs" << std::endl;

	return (0);
}

