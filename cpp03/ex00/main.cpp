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

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    clap1("C1");
    ClapTrap    clap2("C2");

    clap1.attack("c2");
    clap2.takeDamage(5);
    clap2.beRepaired(10);
    clap2.attack("C1");
}

