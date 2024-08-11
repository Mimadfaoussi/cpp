/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:11:03 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/10 18:24:47 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	public:
	ClapTrap(std::string name);
	~ClapTrap();

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	private:
	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;
	
};

# endif