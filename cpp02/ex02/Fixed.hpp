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

	// increment and decrement 

	// pre-increment

	Fixed&	operator++(void);

	// post-increment

	Fixed	operator++(int);

	// pre-decrement

	Fixed&	operator--(void);

	// post-decrement

	Fixed	operator--(int);

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed_number);

	//getter and setter 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	// member functions

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&		min(Fixed &obj1, Fixed &obj2);
	static const Fixed&	min(const Fixed &obj1, const Fixed &obj2);
	static Fixed&		max(Fixed &obj1, Fixed &obj2);
	static const Fixed&	max(const Fixed &obj1, const Fixed &obj2);	

	private:

	int	_n;
	static const int _bits = 8;
};

# endif