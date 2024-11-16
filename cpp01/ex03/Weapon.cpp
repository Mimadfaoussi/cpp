/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:43:43 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 18:51:25 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(const std::string& type): type(type) {}

const	std::string&	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string& type)
{
	this->type = type;
}

