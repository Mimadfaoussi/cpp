/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:52:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 06:57:56 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};
ScalarConverter::~ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter &other){};
// ScalarConverter& operator=(const ScalarConverter &other);


bool ScalarConverter::IsChar(const std::string &literal)
{
	return (literal.length() == 3 && literal.front() == '\'' && literal.back() == '\'');
}


bool ScalarConverter::IsInt(const std::string &literal)
{
	try {
		std::stoi(literal);
		return (true);
	} catch (...) {
		return (false);
	}
}

bool ScalarConverter::IsFloat(const std::string &literal)
{
	bool last;
	try {
		if (literal == "-inff" || literal == "+inff" || literal == "nanf")
			return (true);
		std::stof(literal);
		last = literal.back() == 'f';
		return (last);
	} catch (...){
		return (false);
	}
}

bool ScalarConverter::IsDouble(const std::string &literal)
{
	try {
		if (literal == "-inf" || literal == "+inf" || literal == "nan")
			return (true);
		std::stod(literal);
		return (true);
	} catch (...) {
		return (false);
	}
}


void ScalarConverter::displayConversions(char c) {
	std::cout << "char: ";
	std::cout << "'" << (c) << "'" << std::endl;

	std::cout << "int: " << static_cast<int> (c)<< std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::displayConversions(int i) {
	std::cout << "char: ";
	if (i >= 32 && i <= 126)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}


void ScalarConverter::displayConversions(float i) {
	std::cout << "char: ";
	if (i >= 32 && i <= 126)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: " << static_cast<int> (i) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << (i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}



void ScalarConverter::displayConversions(double i) {
	std::cout << "char: ";
	if (i >= 32 && i <= 126)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: " << static_cast<int> (i) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << (i) << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
	if (literal == "nan" || literal == "nanf" || literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff") 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;

		if (literal.back() == 'f') {
			std::cout << "float: " << literal << std::endl;
			std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
		}
		else {
			std::cout << "float: " << literal << "f" << std::endl;
			std::cout << "double: " << literal << std::endl;
		}

	} else if (IsChar(literal))
	{
		char c = literal[1];
		displayConversions(c);
	} else if (IsInt(literal))
	{
		int	i;
		i = std::stoi(literal);
		displayConversions(i);
	} else if (IsFloat(literal))
	{
		float	i;
		i = std::stof(literal);
		displayConversions(i);
	} else if (IsDouble(literal))
	{
		double	i;
		i = std::stod(literal);
		displayConversions(i);
	} else {
		std::cout << "Invalid literal input." << std::endl;
	}
}

