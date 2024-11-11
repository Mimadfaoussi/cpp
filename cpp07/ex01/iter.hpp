/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:23:51 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/11 06:41:39 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename F >
void	iter(T *array, int size, F func)
{
	for (int i = 0;i < size; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void	printElement(T &element)
{
	std::cout << element << " ";
}

template <typename T>
void	incrementElement(T &element)
{
	element++;
}


# endif