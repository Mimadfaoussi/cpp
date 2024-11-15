/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:46:27 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/15 15:50:11 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(10);
	mstack.push(20);
	mstack.push(50);

	std::cout << "Top element: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "size after poping oen eleement : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Iterating through MutantStack elements:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
	std::stack<int> s(mstack);
    std::cout << "Size of copied std::stack: " << s.size() << std::endl;
	return (0);
}