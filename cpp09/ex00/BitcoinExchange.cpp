/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:30:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 15:06:57 by mfaoussi         ###   ########.fr       */
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
		std::cerr << "Error: Please provide the database " << fileName << std::endl;
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


void BitcoinExchange::exchangeHandler(std::string &inputLine) {
	std::string inputDate;
	std::string btcAmount;
	double btcAmt;
	double value;

	std::stringstream strstream(inputLine);
	if (std::getline(strstream, inputDate, ' ') && skiper(strstream) && std::getline(strstream, btcAmount)) 
	{
		btcAmt = std::stod(btcAmount);
		// lower_bound - Find the first date not less than inputDate
		auto it = exchangeRates.lower_bound(inputDate);

		if (it != exchangeRates.begin() && (it == exchangeRates.end() || it->first > inputDate))
			--it;
		if (it != exchangeRates.end() && it ->first <= inputDate)
		{
			value = btcAmt * it->second;
			std::cout << inputDate << " => " << btcAmount << " = " << value << std::endl;
		}
		else
		{
			std::cerr << "Error: No valid date found for " << inputDate << std::endl;
		}
	}
}


void BitcoinExchange::printExchangeRates() const {
	for (std::map<std::string, double>::const_iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it) 
	{
		std::cout << "Date: " << it->first << "     Rate: " << it->second << std::endl;
	}
}

