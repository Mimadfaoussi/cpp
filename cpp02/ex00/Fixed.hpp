/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:18:00 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/05 08:57:00 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed &operator=(const Fixed& other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int	_n;
	static const int _bits = 8;
};

# endif