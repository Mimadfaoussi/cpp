/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:30:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/16 16:47:27 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){(void) other;}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){ (void)other; return (*this);}

void BitcoinExchange::readDataBase(const std::string &fileName)
{
	std::ifstream	file(fileName.c_str());
	std::string		line;

	if (!file.is_open())
	{
		std::cerr << "Error: Couldn't open the file " << fileName << std::endl;
		return ;
	}
	
	while (std::getline(file, line))
		std::cout << line << std::endl;
	file.close();
}
