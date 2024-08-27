/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:03:50 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/15 09:40:59 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const std::string& type): WrongAnimal(type)
{
	std::cout << "WrongCat Constructor with type as argument called " << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat type : " << type << "is destroyed" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &other)
{
	std::cout << "WrongCat copy assignment operator called " << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meaoww Meaooww  Meeeeeaoooowwwwwwwww " << std::endl;
}

// std::string	WrongCat::getType() const
// {
// 	return type;
// }