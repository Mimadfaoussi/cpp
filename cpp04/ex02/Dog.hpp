/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:33:46 by mfaoussi          #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
	Dog();
	Dog(const std::string& type);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();

	void	makeSound() const override;


	protected:
	std::string	type;

	private:
	Brain*	brain;
};

# endif