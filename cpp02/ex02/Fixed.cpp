/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:02:09 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/08/07 10:48:51 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	_n = 0;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;
	_n = nb << _bits;
}

Fixed::Fixed(const float nb)
{
	// std::cout << "Float constructor called" << std::endl;
	_n = roundf(nb * (1 << _bits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_n = other.getRawBits();
	}
	return (*this);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return _n > other._n;
}

bool	Fixed::operator<(const Fixed& other) const
{
	return _n < other._n;
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return _n >= other._n;
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return _n <= other._n;
}

bool	Fixed::operator==(const Fixed& other) const
{
	return _n == other._n;
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return _n != other._n;
}

// arithmetic operators overloading :

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;

	result._n = _n + other._n;
	return result;
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;

	result._n = _n - other._n;
	return result;
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	result;

	result._n = (_n * other._n) >> _bits;
	return result;
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	result;

	result._n = (_n << _bits) / other._n;
	return result;
}

// increment and decrement overloading 

Fixed&	Fixed::operator++(void)
{
	_n++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);
	_n++;
	return (copy);
}

Fixed&	Fixed::operator--(void)
{
	_n--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);

	_n--;
	return (copy);
}



std::ostream& operator<<(std::ostream& os, const Fixed& fixed_number)
{
	os << fixed_number.toFloat();
	return os;
}


int	Fixed::getRawBits(void) const
{
	return (_n);
}

void	Fixed::setRawBits(int const raw)
{
	_n = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(_n) / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_n >> _bits);
}

Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 <= obj2)
		return (obj1);
	return (obj2);
}

const Fixed&	Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 <= obj2)
		return (obj1);
	return (obj2);
}

Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 >= obj2)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 >= obj2)
		return (obj1);
	return (obj2);
}