/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:25:09 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/13 15:40:13 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    naruto("naruto");
    ClapTrap    sasuke("sasuke");
	ScavTrap	killua("killua");
	ScavTrap	gon("gon");
	

	killua.attack("gon");
	gon.takeDamage(4);
	gon.beRepaired(3);
	gon.attack("killua");
	killua.takeDamage(3);
	killua.beRepaired(3);
	gon.guardGate();
	killua.guardGate();
	naruto.attack("sasuke");
	sasuke.takeDamage(4);
	sasuke.beRepaired(3);
	sasuke.attack("naruto");
	naruto.takeDamage(3);
	naruto.beRepaired(3);
}