/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 02:38:24 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 03:39:37 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void	randomChump(std::string name);

int main()
{
	Zombie *heapZombie;

	heapZombie = newZombie("imad");
	heapZombie->announce();
	randomChump("stack zombie");
	delete(heapZombie);
	return (0);
}