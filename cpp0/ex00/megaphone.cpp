/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 00:54:19 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/13 04:50:24 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printUpperCase(std::string& str)
{
	for (std::string::size_type i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
		else
			std::cout << str[i];
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i=1; i < argc; i++)
		{
			std::string arg = argv[i];
			printUpperCase(arg);
		}
		std::cout << std::endl;
	}
	return (0);
}


