/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:47:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/19 11:46:42 by mfaoussi         ###   ########.fr       */
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
	void		parseArgs(char **argv);

	private:
	std::vector <int> numbers;
	std::vector <int> small_numbers;


};


# endif