/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:52:18 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 20:10:03 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(const std::string& name):name(name), WeaponB{nullptr} {}

void	HumanB::attack() const
{
	if (WeaponB)
		std::cout << name << " attacks with their " << WeaponB->getType() << std::endl;
	else
		std::cout << name << " has no weapon " << std::endl;
}

void	HumanB::setWeaponB(Weapon& WeaponB)
{
	this->WeaponB = &WeaponB;
}
