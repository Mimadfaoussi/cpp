/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:26:25 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/07 10:34:32 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:

	//constructors

	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed& other);

	//destructor

	~Fixed();

	// operators overloading :

	// comparison operators overloading :

	Fixed	&operator=(const Fixed& other);
	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	// arithmetic operators overloading :

	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed_number);

	//getter and setter 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	// member functions

	float	toFloat(void) const;
	int		toInt(void) const;

	private:

	int	_n;
	static const int _bits = 8;
};

# endif