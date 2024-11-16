/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 03:25:37 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/06/16 03:47:07 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	// member functions 
	void			announce() const ;
	void			setName(std::string name);

	private:
	std::string		name;
};

# endif