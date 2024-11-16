/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:39:15 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 19:19:55 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

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