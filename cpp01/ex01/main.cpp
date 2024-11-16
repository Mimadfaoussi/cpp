/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 03:40:29 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 03:57:25 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main()
{
	int		N;
	Zombie	*zombies;

	std::string name = "42 Zombies";
	N = 42;
	zombies = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}

	delete[] zombies;
	return (0);
}

