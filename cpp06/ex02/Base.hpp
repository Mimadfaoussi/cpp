/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:03:13 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/11/10 10:26:36 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime>


class Base {
	public:
	virtual ~Base();

};

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);



#endif