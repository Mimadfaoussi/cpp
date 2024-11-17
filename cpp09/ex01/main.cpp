/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:19:10 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 19:36:52 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"



int main(int argc, char **argv)
{
	RPN calculator;

	if (argc != 2)
	{
		std::cout << "Error: Usage : ./RPN \"expression\" " << std::endl;
		return (1);
	}
	std::string expression(argv[1]);

	for (char c : expression)
	{
		if (std::isspace(c))
			continue ;
		if (std::isdigit(c))
		{
			int	d;
			d = c - '0';
			calculator.pushDigit(d);
		}
		else if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			calculator.makeOperation(c);
		}
		else
		{
			std::cout << "Syntax Error ... " << std::endl;
			return (1);
		}
	}
	// calculator.printStack();
	calculator.checkResult();
	return (0);
}

