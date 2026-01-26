/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:47:41 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 15:58:25 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a1(0, 0);
	Point	b1(0, 3);
	Point	c1(3, 0);
	Point	p1(0, 1);

	if (bsp(a1, b1, c1, p1))
		std::cout << "Point is in triangle!" << std::endl;
	else
		std::cout << "Point isn't in the triangle..." << std::endl;

	
	Point	a2(0, 0);
	Point	b2(0, 3);
	Point	c2(3, 0);
	Point	p2(1, 1);

	if (bsp(a2, b2, c2, p2))
		std::cout << "Point is in triangle!" << std::endl;
	else
		std::cout << "Point isn't in the triangle..." << std::endl;
	

	if (bsp(Point(0,0), Point(0,6), Point(4,1), Point(3,2)))
		std::cout << "Point is in triangle!" << std::endl;
	else
		std::cout << "Point isn't in the triangle..." << std::endl;

	if (bsp(Point(1,9), Point(2,2), Point(5,5), Point(0,0)))
		std::cout << "Point is in triangle!" << std::endl;
	else
		std::cout << "Point isn't in the triangle..." << std::endl;
	return (0);
}
