/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:25:09 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/13 16:06:00 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void)
{
    ClapTrap    naruto("naruto");
    ClapTrap    sasuke("sasuke");
	FragTrap	zoro("zoro");
	FragTrap	luffy("luffy");
	ScavTrap	killua("killua");
	ScavTrap	gon("gon");
	

	killua.attack("gon");
	gon.takeDamage(400);
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

	luffy.attack("zoro");
	zoro.takeDamage(4);
	zoro.beRepaired(3);
	zoro.attack("luffy");
	luffy.takeDamage(3);
	luffy.beRepaired(3);
	zoro.highFivesGuys();
	luffy.highFivesGuys();

}