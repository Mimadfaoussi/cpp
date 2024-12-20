/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:02:44 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/15 18:58:59 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack :public std::stack <T>
{
	public:

	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &other) : std::stack<T>(other) {}
	~MutantStack(){};
	MutantStack &operator=(const MutantStack &other)
	{
		if (this != &other)
			std::stack<T>::operator=(other);
		return (*this);
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	const_iterator begin() const
	{
		return this->c.begin();
	}
	const_iterator end() const
	{
		return this->c.end();
	}	
};


# endif