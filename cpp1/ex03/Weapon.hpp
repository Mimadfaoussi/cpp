/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:39:15 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 18:45:04 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon
{
	public:
	//constructor
	Weapon();
	Weapon(const std::string& type);

	//member functions
	const std::string&	getType() const;
	void				setType(const std::string& type);

	//private attributes 
	private:
	std::string			type;
};

# endif