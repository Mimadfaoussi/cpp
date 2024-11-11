/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:24:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/11 06:54:39 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main()
{
	int	intArray[] = {1, 2, 3, 4, 5};
	int	intArraySize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "original array : ";
	iter(intArray, intArraySize, printElement<int>);
	std::cout << "\n";

	iter(intArray, intArraySize, incrementElement<int>);
	std::cout << "incremented array : ";
	iter(intArray, intArraySize, printElement<int>);
	std::cout << "\n";

	std::string strArray[] = {"V", "For", "Vendetta"};
	int			strArraySize = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "string Array : ";
	iter(strArray, strArraySize, printElement<std::string>);
	std::cout << "\n";
	return (0);
}
