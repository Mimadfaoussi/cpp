/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:03:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/19 17:25:38 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal():
	type("Animal")
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const std::string& type):
	type(type)
{
	std::cout << "Animal Constructor with type as argument called " << std::endl;
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



std::string	Animal::getType() const
{
	return type;
}
