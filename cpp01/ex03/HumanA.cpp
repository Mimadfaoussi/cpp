/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:29:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 20:13:14 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& WeaponA):WeaponA(WeaponA), name(name) {}

void	HumanA::attack() const 
{
	std::cout << name << " attacks with their " << WeaponA.getType() << std::endl;
}
