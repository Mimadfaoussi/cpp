/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:33:46 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/14 18:57:05 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
	Dog();
	Dog(const std::string& type);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();

	void	makeSound();
	protected:
	std::string	type;
};

# endif