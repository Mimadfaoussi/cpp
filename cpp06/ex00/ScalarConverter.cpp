/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:52:22 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/06 14:46:24 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

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

void ScalarConverter::displayConversions(char c)
{
	std::cout << "Int : ";
}


void ScalarConverter::displayConversions(int i) {
    std::cout << "char: ";
    if (i >= 32 && i <= 126)
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}
