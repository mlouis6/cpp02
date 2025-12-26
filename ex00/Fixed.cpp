/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:01 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/26 18:29:20 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	_nb = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed&)
{
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed&)
{
	std::cout << "Copy assignment operator called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
}
