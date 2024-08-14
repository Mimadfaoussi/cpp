/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:03:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/14 16:28:25 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal():
	type("Default")
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const std::string& type):
	type(type)
{
	std::cout << "Constructor with type as argument called " << std::endl;
}

Animal::Animal(const Animal& other):
	type(other.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal type : " << type << "is destroyed" << std::endl;
}

void	makeSound()
{
	std::cout << "General animal sound " << std::endl;
}
