/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:19:34 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 19:27:43 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(const std::string& name);
	
	void				attack();
	void				setWeapon(Weapon& WeaponB);

	private:
	Weapon				WeaponB;
	std::string 		name;
};

# endif