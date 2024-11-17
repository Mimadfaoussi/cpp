/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:30:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 12:59:29 by mfaoussi         ###   ########.fr       */
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


bool BitcoinExchange::skiper(std::stringstream &strstream)
{
	while (strstream.peek() == ' ' || strstream.peek() == '|')
	{
		strstream.ignore(1);
	}
	return (true);
}

void	BitcoinExchange::exchangeHandler(std::string &inputLine)
{
	std::string		inputDate;
	std::string		btcAmount;
	double			btcAmt;

	std::stringstream	strstream(inputLine);
	if ( std::getline(strstream, inputDate, ' ') && skiper(strstream) && std::getline(strstream, btcAmount))
	{
		btcAmt = std::stod(btcAmount);
		std::cout << "the amount of my bitcoins are : " << btcAmt << std::endl;
	}
}


void BitcoinExchange::printExchangeRates() const {
	for (std::map<std::string, double>::const_iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it) 
	{
		std::cout << "Date: " << it->first << "     Rate: " << it->second << std::endl;
	}
}

