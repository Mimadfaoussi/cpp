/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:25:09 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/10 19:42:46 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && )
}