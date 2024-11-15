/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:37:20 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/15 09:38:21 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}


// int main()
// {
//     Span vec(10);
//     vec.addNumber(8);
//     vec.addNumber(1);
//     vec.addNumber(5);
//     vec.addNumber(3);
//     vec.addNumber(4);
//     vec.addNumber(20);
//     vec.addNumber(0);

//     try{
//         vec.shortestSpan();
//         vec.longestSpan();
//     }catch (const std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     return (0);
// }


