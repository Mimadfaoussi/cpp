/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 03:40:56 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 03:51:13 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return nullptr;
	
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return zombies;
}