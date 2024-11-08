/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:50:45 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/08 11:52:53 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>

class ScalarConverter {
	private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter& operator=(const ScalarConverter &other);

	static bool IsChar(const std::string &literal);
	static bool IsInt(const std::string &literal);
	static bool IsFloat(const std::string &literal);
	static bool IsDouble(const std::string &literal);

	static void	displayConversions(char c);
	static void displayConversions(int i);
	static void displayConversions(float i);
	static void displayConversions(double i);
	
	public:
	static void convert(const std::string &literal);
};

# endif
