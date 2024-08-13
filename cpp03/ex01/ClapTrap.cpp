/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:25:09 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/13 16:00:57 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
}


ClapTrap::ClapTrap(const std::string& name):
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
    std::cout << "ClapTrap Constructor with name as argument called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other):
	_name(other._name),
	_hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap copy constructor called for " << _name << " !" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap copy assignment operator called for " << _name << " !" << std::endl;
	return (*this);
}


void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints = _energyPoints - 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "No energy or hit points left for ClapTrap " << _name <<  std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints = _hitPoints + amount;
		_energyPoints = _energyPoints - 1;
		std::cout << "ClapTrap " << _name <<" is repaired by " << amount << " hit points , total hitpoints are " << _hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap" << _name << " has No energy points left" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		if (_hitPoints > amount)
		{
			_hitPoints = _hitPoints - amount;
			std::cout << "ClapTrap " << _name << "takes " << amount << "points of damage and remaining hit points : " << _hitPoints << std::endl;
		}
		else
		{
			_hitPoints = 0;
			std::cout << "ClapTrap " << _name << "takes " << amount << "points of damage and has no hit points left! " << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
	}
}