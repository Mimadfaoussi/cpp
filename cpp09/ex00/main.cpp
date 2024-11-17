/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:41:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 13:41:14 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"





bool isValidDate(int year, int month, int day) 
{
	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (year < 0 || year > 2024)
	{
		std::cout << "Error: " << year << " is not a valid year" << std::endl;
		return (false);
	}

	if (month < 1 || month > 12)
	{
		std::cout << "Error: " << month << " is not a valid month" << std::endl;
		return (false);
	}
	if (day > 0 && day <= daysInMonth[month - 1])
		return (true);
	
	std::cout << "Error: " << day << " is not a valid month" << std::endl;
	return (false);
}





bool validateDate(const std::string& date) {
	int		year, month, day;
	char	delimiter;
	bool	validity;

	const std::regex dateRegex("^\\d{4}-\\d{2}-\\d{2}$");
	if (!std::regex_match(date, dateRegex)) {
		std::cout << "Error: wrong format" << std::endl;
		return false;
	}
	std::stringstream ss(date);
	ss >> year >> delimiter >> month >> delimiter >> day;
	validity = isValidDate(year, month, day);
	return (validity);
}





bool validateValue(const std::string& value) {
	std::stringstream ss(value);
	double number;

	ss >> number;
	if (ss.fail() || !ss.eof()) 
	{
		std::cout << "Error: something is wrong" << std::endl;
		return false;
	}
	if (number < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	if (number > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return (true);
}

bool check_expression(std::string inputLine)
{
	const std::regex InputRegex("^\\d{4}-\\d{2}-\\d{2}\\s*\\|\\s*-?\\d+(\\.\\d+)?$");
	if (!std::regex_match(inputLine, InputRegex)) {
		std::cout << "Error: bad input => " << inputLine << std::endl;
		return true;
	}
	return false;
}

bool validate_line(const std::string& inputLine) {
	std::stringstream ss(inputLine);
	std::string date, value;

	if ((!std::getline(ss, date, ' ')) || (check_expression(inputLine)))
		return false;
	BitcoinExchange::skiper(ss);
	if (!validateDate(date)) return false;
	if (!std::getline(ss, value)) return false;
	if (!validateValue(value)) return false;
	return (true);
}



int main(int argc, char **argv)
{
	BitcoinExchange	bitcoin;
	bool			inputHeader;
	std::string		inputLine;

	

	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	std::ifstream		inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Couldn't open Input file " << argv[1] << std::endl;
		return 1;
	}
	inputHeader = true;
	bitcoin.readDataBase("data.csv");
	while (std::getline(inputFile, inputLine))
	{
		if (inputHeader || inputLine.empty())
		{
			inputHeader = false;
			continue ;
		}
		if (validate_line(inputLine))
			bitcoin.exchangeHandler(inputLine);
		else
			continue;
	}
	inputFile.close();
	return (0);
}

