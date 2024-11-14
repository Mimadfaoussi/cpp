/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:24:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/14 08:45:31 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main()
{
	try {
		Array <int> intArray(10);
		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			intArray[i] = i * 10;
		}
		std::cout << "\n"<< std::endl;
		std::cout << "intArray : " << std::endl;
		std::cout << "----------" << std::endl;

		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			std::cout << intArray[i] << " ";
		}
		std::cout << "\n"<< std::endl;

		Array <int> copyIntArray(intArray);
		std::cout << "copy intArray :" << std::endl;
		std::cout << "--------------" << std::endl;		
		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			std::cout << copyIntArray[i] << " ";
		}
		std::cout << "\n"<< std::endl;

		std::cout << "Accessing out of bounds element!!" << std::endl;

		std::cout << intArray[12] << std::endl;
		
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what();
	}
	return (0);
}

