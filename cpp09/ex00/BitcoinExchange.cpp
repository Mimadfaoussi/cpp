/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:30:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/16 17:51:35 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){(void) other;}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){ (void)other; return (*this);}

void BitcoinExchange::readDataBase(const std::string &fileName)
{
	std::ifstream		file(fileName.c_str());
	std::string			line;
	bool				header;
	std::string			date;
	std::string			strRate;

	if (!file.is_open())
	{
		std::cerr << "Error: Couldn't open the file " << fileName << std::endl;
		return ;
	}
	header = true;
	while (std::getline(file, line))
	{
		if (header || line.empty())
		{
			header = false;
			continue;
		}
		std::stringstream	ss(line);
		
		if (std::getline(ss, date, ',') && std::getline(ss, strRate))
		{
			double rate = std::stod(strRate);
			exchangeRates[date] = rate;
		}
	}
	file.close();
}

void BitcoinExchange::printExchangeRates() const {
    // Declare the iterator explicitly as std::map<string, double>::const_iterator
    for (std::map<std::string, double>::const_iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it) {
        std::cout << "Date: " << it->first << "     Rate: " << it->second << std::endl;
    }
}

