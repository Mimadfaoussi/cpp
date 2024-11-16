/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:41:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/16 17:49:18 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange	bitcoin;
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Error: Wrong nb of args" << std::endl;
		return (1);
	}
	bitcoin.readDataBase("data.csv");
	bitcoin.printExchangeRates();

	return (0);
}