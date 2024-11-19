/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:47:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/19 12:34:59 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PMERGEME_HPP
# define PMERGEME_HPP


#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <climits>

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

	private:
	std::vector <int> numbers;
	std::vector <int> small_numbers;


};


# endif