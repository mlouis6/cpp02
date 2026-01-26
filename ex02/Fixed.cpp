/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:01 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 15:34:30 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <limits>

const int	Fixed::_frac = 8;

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called\n";
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
	// std::cout << "Copy constructor called\n";
	setRawBits(f.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& f)
{
	// std::cout << "Copy assignment operator called\n";
	if (this != &f)
		setRawBits(f.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
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

bool	Fixed::operator>(const Fixed& r) const
{
	return (this->_raw > r._raw);
}

bool	Fixed::operator<(const Fixed& r) const
{
	return (this->_raw < r._raw);
}

bool	Fixed::operator>=(const Fixed& r) const
{
	return (this->_raw >= r._raw);
}

bool	Fixed::operator<=(const Fixed& r) const
{
	return (this->_raw <= r._raw);
}

bool	Fixed::operator==(const Fixed& r) const
{
	return (this->_raw == r._raw);
}

bool	Fixed::operator!=(const Fixed& r) const
{
	return (this->_raw != r._raw);
}

Fixed	Fixed::operator+(const Fixed& r) const
{
	long	res;

	res = static_cast<long>(this->_raw) + static_cast<long>(r._raw);
	if (res > std::numeric_limits<int>::max())
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::max());
		std::cout << "Error\nOverflow" << std::endl;
		return (f);
	}
	return (Fixed(this->toFloat() + r.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& r) const
{
	long	res;

	res = static_cast<long>(this->_raw) - static_cast<long>(r._raw);
	if (res < std::numeric_limits<int>::min())
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::min());
		std::cout << "Error\nUnderflow" << std::endl;
		return (f);
	}
	return (Fixed(this->toFloat() - r.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& r) const
{
	long	res;

	res = static_cast<long>(this->_raw) * static_cast<long>(r._raw);
	if (res > std::numeric_limits<int>::max())
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::max());
		std::cout << "Error\nOverflow" << std::endl;
		return (f);
	}
	else if (res < std::numeric_limits<int>::min())
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::min());
		std::cout << "Error\nUnderflow" << std::endl;
		return (f);
	}
	return (Fixed(this->toFloat() * r.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& r) const
{
	long	res;

	if (r.toFloat() == 0)
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::min());
		std::cout << "Error\nCan't divide by zero" << std::endl;
		return (f);
	}
	res = static_cast<long>(this->_raw) / static_cast<long>(r._raw);
	if (res > std::numeric_limits<int>::max())
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::max());
		std::cout << "Error\nOverflow" << std::endl;
		return (f);
	}
	else if (res < std::numeric_limits<int>::min())
	{
		Fixed f;
		f.setRawBits(std::numeric_limits<int>::min());
		std::cout << "Error\nUnderflow" << std::endl;
		return (f);
	}
	return (Fixed(this->toFloat() / r.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	if (this->_raw == std::numeric_limits<int>::max())
	{
		std::cout << "Error\nOverflow" << std::endl;
		return (*this);
	}
	this->_raw += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;

	operator++();
	return (old);
}

Fixed&	Fixed::operator--(void)
{
	if (this->_raw == std::numeric_limits<int>::min())
	{
		std::cout << "Error\nUnderflow" << std::endl;
		return (*this);
	}
	this->_raw -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;

	operator--();
	return (old);
}

Fixed&	Fixed::min(Fixed& l, Fixed& r)
{
	if (l < r)
		return (l);
	return (r);
}

const Fixed&	Fixed::min(const Fixed& l, const Fixed& r)
{
	if (l.getRawBits() < r.getRawBits())
		return (l);
	return (r);
}

Fixed&	Fixed::max(Fixed& l, Fixed& r)
{
	if (l > r)
		return (l);
	return (r);
}

const Fixed&	Fixed::max(const Fixed& l, const Fixed& r)
{
	if (l.getRawBits() > r.getRawBits())
		return (l);
	return (r);
}
