/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:19:34 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 20:14:19 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(const std::string& name);
	
	void				attack() const;
	void				setWeapon(Weapon& WeaponB);

	private:
	Weapon*				WeaponB;
	std::string 		name;
};

# endif