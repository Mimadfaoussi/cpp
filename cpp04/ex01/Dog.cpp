/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:03:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/15 08:38:24 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(const std::string& type): Animal(type)
{
	brain = new Brain();
	std::cout << "Dog Constructor with type as argument called " << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog type : " << type << "is destroyed" << std::endl;
}

Dog&	Dog::operator=(Dog const &other)
{
	std::cout << "Dog copy assignment operator called " << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete (brain);
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Howww aoww aowwwwouuuu " << std::endl;
}

// std::string	Dog::getType() const
// {
// 	return type;
// }

