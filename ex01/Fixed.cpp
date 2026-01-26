/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:01 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 14:20:02 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_frac = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	setRawBits(0);
}

Fixed::Fixed(const int n)
{
	_raw = n * (1 << _frac);
}

Fixed::Fixed(const float n)
{
	_raw = roundf(n * (1 << _frac));
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called\n";
	setRawBits(f.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &f)
		setRawBits(f.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_raw) / (1 << _frac));
}

int	Fixed::toInt(void) const
{
	return (_raw / (1 << _frac));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}
