/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:19:02 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 19:12:20 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &other){(void) other;}

RPN::~RPN(){}

RPN& RPN::operator=(const RPN &other){ (void)other; return (*this);}


void	RPN::pushDigit(int nb)
{
	operands.push(nb);
}
int		RPN::popDigit()
{
	int	value;

	if (operands.size() > 0)
	{
		value = operands.top();
		operands.pop();
		return (value);
	}
	std::cout << "Error encountered" << std::endl;
	exit(1);
	return (-9999999);
}
void	RPN::printStack()
{
	while (operands.size() > 0)
	{
		std::cout << operands.top() << std::endl;
		operands.pop();
	}
}
