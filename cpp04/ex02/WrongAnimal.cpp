/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:03:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/15 09:33:10 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
	type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type):
	type(type)
{
	std::cout << "Constructor with type as argument called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other):
	type(other.type)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal type : " << type << "is destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "General WrongAnimal sound " << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}
