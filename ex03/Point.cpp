/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:55:31 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/14 14:04:26 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	
}

Point::Point(const float n1, const float n2) : _x(n1), _y(n2)
{

}

Point::Point(const Point& p) : _x(p._x), _y(p._y)
{
	
}

Point& Point::operator=(const Point& p)
{
	(void) p;
	return (*this);
}

Point::~Point(void)
{
	std::cout << "bye\n";
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}
