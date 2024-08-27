/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:33:46 by mfaoussi          #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
	Cat();
	Cat(const std::string& type);
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();

	void		makeSound() const override;

	protected:
	std::string	type;

	private:
	Brain*	brain;

};

# endif