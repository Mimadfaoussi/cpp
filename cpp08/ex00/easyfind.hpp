/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:37:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/14 11:30:13 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include "iostream"
# include "exception"
# include <algorithm>


template <typename T>
int	easyfind(T &numbers, int n)
{
	if (numbers == NULL)
		return (-1);
	int nb = std::find(numbers.begin(), numbers.end(), n);
	if (nb != numbers.)
}



# endif 


std::vector<int> vec = {1, 2, 3, 4, 5};

// Find the first occurrence of '3' in the vector
auto it = std::find(vec.begin(), vec.end(), 3);

if (it != vec.end()) {
    std::cout << "Found value: " << *it << std::endl;
} else {
    std::cout << "Value not found." << std::endl;
}
