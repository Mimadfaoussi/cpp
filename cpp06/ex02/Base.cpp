/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:02:59 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 10:27:04 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base* generate(void)
{
	std::srand(std::time(0));

	int random = std::rand() % 3;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else if (random == 2)
		return new C();
	else
		return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A*> (p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*> (p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*> (p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}


void	identify(Base &p)
{
	try {
		(void) dynamic_cast <A&>(p);
		std::cout << "A" << std::endl;
		
	} catch (std::bad_cast &)
	{
		try {
			(void) dynamic_cast <B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast &)
		{
			try {
				(void) dynamic_cast <C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(std::bad_cast &)
			{
				std::cout << "Unknown type" << std::endl;
			}
			
		}
	}
}

