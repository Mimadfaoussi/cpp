/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:19:02 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/18 10:45:33 by mfaoussi         ###   ########.fr       */
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
	std::cout << "Error" << std::endl;
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

void	RPN::makeOperation(char c)
{
	int	nb1;
	int	nb2;
	int result;

	if (operands.size() < 2)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	nb1 = this->popDigit();
	nb2 = this->popDigit();
	if (c == '+')
		result = nb2 + nb1;
	if (c == '-')
		result = nb2 - nb1;
	if (c == '*')
		result = nb2 * nb1;
	if (c == '/')
	{
		if (nb1 == 0)
		{
			std::cout << "Error"<<std::endl;
			exit(1);
		}
		result = nb2 / nb1;
	}
	this->pushDigit(result);
}

void	RPN::checkResult()
{
	if (operands.size() != 1)
	{
		std::cout << "Error"<<std::endl;
		exit(1);
	}
	else
	{
		std::cout << operands.top() << std::endl;
		operands.pop();
	}
}