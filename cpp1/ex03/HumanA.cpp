/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:29:12 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 19:33:19 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(Weapon& WeaponA, const std::string& name):WeaponA(WeaponA), name(name) {}

void	HumanA::attack() const 
{
	std::cout << name << " attacks with their " << WeaponA.getType() << std::endl;
}
