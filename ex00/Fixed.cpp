/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:01 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 14:11:30 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	setRawBits(0);
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
