/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:17 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 11:11:12 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
# include <regex>

class BitcoinExchange {
	public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange& operator=(const BitcoinExchange &other);
	~BitcoinExchange();
	void	readDataBase(const std::string &fileName);
	void	printExchangeRates() const;
	// void	exchangeHandler(std::string &date, double btcAmt);

	private:
	std::map<std::string, double> exchangeRates; // Map to store date as key and exchange rate as value


};

# endif