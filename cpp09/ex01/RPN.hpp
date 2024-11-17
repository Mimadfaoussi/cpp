/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:17:31 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/17 19:34:48 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RPN_HPP
# define RPN_HPP

# include <stack>
#include <iostream>
#include <string>
#include <cctype>

class RPN {
	public:
	RPN();
	RPN(const RPN &other);
	RPN& operator=(const RPN &other);
	~RPN();

	void	pushDigit(int nb);
	int		popDigit();
	void	printStack();
	void	makeOperation(char c);
	void	checkResult();
	
	private:
	std::stack<int>	operands;
};


# endif