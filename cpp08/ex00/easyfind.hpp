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
# include <algorithm>
# include <exception>
# include <vector>


template <typename T>
typename T::iterator	easyfind(T &numbers, int n)
{
	typename T::iterator	nb;

	nb = std::find(numbers.begin(), numbers.end(), n);
	if (nb != numbers.end())
	{
		std::cout << "Found value : " << *nb << std::endl;
		return (nb);
	}
	else
	{
		throw std::runtime_error("Exception: value not Found");
	}
}

# endif 
