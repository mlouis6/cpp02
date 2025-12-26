/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:01 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/26 19:34:16 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	setRawBits(0);
}

//TODO:
Fixed::Fixed(const int n)
{

}

Fixed::Fixed(const float n)
{

}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called\n";
	setRawBits(f.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called\n";
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

//TODO:
float	Fixed::toFloat(void) const
{
	return (9.8f);
}

int	Fixed::toInt(void) const
{
	return (10);
}

std::ostream& operator<<(std::ostream& so, const Fixed& f)
{
	return ("lol");
}
