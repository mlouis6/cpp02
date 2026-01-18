/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:55:36 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/18 14:23:23 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		//* CONSTRUCTORS
		Point(void);
		Point(const float n1, const float n2);
		Point(const Point& p);
		Point& operator=(const Point& p);
		~Point(void);

		//* SETTERS / GETTERS
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		
	private:
		Fixed const _x;
		Fixed const _y;

};

#endif
