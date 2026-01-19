/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:47:41 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/19 13:18:51 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 3);
	Point	c(3, 0);
	Point	p(1, 1);

	if (bsp(a, b, c, p))
		std::cout << "Point is in triangle!" << std::endl;
	else
		std::cout << "Point isn't in the triangle..." << std::endl;
	return (0);
}
