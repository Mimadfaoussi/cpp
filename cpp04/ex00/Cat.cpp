/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:03:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/15 08:38:16 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat(const std::string& type): Animal(type)
{
	std::cout << "Cat Constructor with type as argument called " << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat type : " << type << "is destroyed" << std::endl;
}

Cat&	Cat::operator=(Cat const &other)
{
	std::cout << "Cat copy assignment operator called " << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meaoww Meaooww  Meeeeeaoooowwwwwwwww " << std::endl;
}

// std::string	Cat::getType() const
// {
// 	return type;
// }