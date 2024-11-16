/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:41:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/16 16:45:27 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main()
{
	BitcoinExchange	bitcoin;

	try {
		
		bitcoin.readDataBase("data.csv");
	} catch (...)
	{
		std::cout << "Error\n" << std::endl;
		return (1);
	}
	return (0);
}