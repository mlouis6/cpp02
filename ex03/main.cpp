/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:47:41 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/13 14:51:46 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed		a(10);
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		c(10.0f);

	std::cout << "a= " << a << std::endl;
	std::cout << "b= " << b << std::endl;
	std::cout << "c= " << c << std::endl;

	if (a < b && b > a)
		std::cout << "a is lower than b\n";
	if (a >= c && a <= c && a == c)
		std::cout << "a and c are equals\n";
	std::cout << "++a= " << ++a << std::endl;
	if (a != c)
		std::cout << "a and c are NOT equals\n";
	std::cout << "a++= " << a++ << std::endl;
	std::cout << "a= " << a << std::endl;
	a = a + 3;
	std::cout << "a= " << a << std::endl;
	if (a > b && b < a)
		std::cout << "a is higher than b\n";
	a = a - 2;
	std::cout << "a - 2= " << a << std::endl;
	std::cout << "--a= " << --a << std::endl;
	std::cout << "a= " << a << std::endl;
	std::cout << "a--= " << a-- << std::endl;
	std::cout << "a= " << a << std::endl;
	c = b / 2;
	std::cout << "c= " << c << std::endl;
	
	Fixed f_min = Fixed::min(a, c);
	std::cout << "f_min= " << f_min << std::endl;
	Fixed const f_min2 = Fixed::min(c, a);
	std::cout << "f_min2= " << f_min2 << std::endl;


	Fixed f_max = Fixed::max(a, c);
	std::cout << "f_max= " << f_max << std::endl;
	Fixed const f_max2 = Fixed::max(c, a);
	std::cout << "f_max2= " << f_max2 << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}
